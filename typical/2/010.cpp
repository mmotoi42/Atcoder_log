//22:43
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int c[n], p[n];
	for (int i = 0; i < n; i++) cin >> c[i] >> p[i];
	int q;
	cin >> q;
	int l[q],r[q];
	for (int i = 0; i < q; i++) cin >> l[i] >> r[i];

	// class a,b;
	int a[n + 1] = {0};
	int b[n + 1] = {0};
	for (int i = 0; i < n + 1; i++) {
		if (c[i] == 1) a[i + 1] += p[i];
		else b[i + 1] += p[i];
	}

	for (int i = 1; i < n + 1; i++) {
		a[i] += a[i - 1];
		b[i] += b[i - 1];
	}
	
	// for (int i = 0; i < n + 1; i++) cout << a[i] << " ";
	// cout << endl;
	// for (int i = 0; i < n + 1; i++) cout << b[i] << " ";
	// cout << endl;

	for (int i = 0; i < q; i++) {
		cout << a[r[i]] - a[l[i] - 1] << " " << b[r[i]] - b[l[i] - 1] << endl;
	}

}