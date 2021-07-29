#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,p,q;
	cin >> n >> p >> q;
	long a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	long cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				for (int l = k + 1; l < n; l++) {
					for (int m = l + 1; m < n; m++) {
						if (a[i] % p * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q) cnt++;
					}
				}
			}
		}
	}
	cout << cnt << endl;
}