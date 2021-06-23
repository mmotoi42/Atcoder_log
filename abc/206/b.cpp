#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	long sum = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
		if (sum >= n) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
}