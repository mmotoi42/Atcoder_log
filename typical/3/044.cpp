#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin >> n >> q;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int t[q],x[q],y[q];
	for (int i = 0; i < q; i++) cin >> t[i] >> x[i] >> y[i];
	int f = 0;
	// for (int i = 0; i < n; i++) cout << a[(f + i) % n] << " ";
	// cout << endl;
	for (int i = 0; i < q; i++) {
		if (t[i] == 1) {
			a[(f + x[i] - 1) % n] ^= a[(f + y[i] - 1) % n];
			a[(f + y[i] - 1) % n] ^= a[(f + x[i] - 1) % n];
			a[(f + x[i] - 1) % n] ^= a[(f + y[i] - 1) % n];
			//for (int i = 0; i < n; i++) cout << a[(f + i) % n] << " ";
			//cout << endl;
		}
		else if (t[i] == 2) {
			f--;
			if (f < 0) f += n;
			//for (int i = 0; i < n; i++) cout << a[(f + i) % n] << " ";
			//cout << endl;
		}
		else {
			//for (int i = 0; i < n; i++) cout << a[(f + i) % n] << " ";
			//cout << endl;
			cout << a[(f + x[i] - 1) % n] << endl;
		}
	}
}