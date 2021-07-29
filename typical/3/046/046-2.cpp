#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	long a[46],b[46],c[46];
	for (int i = 0; i < 46; i++) {
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a[t % 46]++;
	}
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		b[t % 46]++;
	}
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		c[t % 46]++;
	}

	long cnt = 0;
	for (int i = 0; i < 46; i++) {
		for (int j = 0; j < 46; j++) {
			for (int k = 0; k < 46; k++) {
				int sum = i + j + k;
				if (sum % 46 == 0) cnt += a[i] * b[j] * c[k];
			}
		}
	}

	cout << cnt << endl;
}