#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][6];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> a[i][j];
		}
	}

	long sum[n];
	for (int i = 0; i < n; i++) {
		sum[i] = 0;
		for (int j = 0; j < 6; j++) {
			sum[i] += a[i][j];
		}
	}

	long ans = sum[0];
	for (int i = 1; i < n; i++) {
		ans *= sum[i];
		ans %= 1000000007;
	}

	cout << ans << endl;
}