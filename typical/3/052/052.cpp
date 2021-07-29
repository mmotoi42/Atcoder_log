#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	long a[n][6];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> a[i][j];
		}
	}
	long ans = 1;
	for (int i = 0; i < n; i++) {
		long sum = 0;
		for (int j = 0; j < 6; j++) {
			sum += a[i][j];
		}
		ans *= sum;
		ans %= 1000000007;
	}
	cout << ans << endl;
}