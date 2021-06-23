#include <bits/stdc++.h>
using namespace std;
 
// +:1, -:0
int t[100000];
long dp[100000];
long sum = 0;
 
void rec(int cur, int n, long a[])
{
 
	if (cur + 1 == n - 1)
	{
		if (t[cur] == 0) dp[cur + 1] = dp[cur] - a[n - 1];
		else dp[cur + 1] = dp[cur] + a[n - 1];
		sum += dp[cur + 1];
		// for (int i = 0; i < n - 1; i++) cout << t[i];
		// cout << endl;
		// for (int i = 0; i < n; i++) cout << dp[i] << " ";
		// cout << endl;
		sum %= 1000000007;
		return;
	}
 
	for (int i = 0; i < 2; i++) {
		t[cur + 1] = i;
		if (t[cur] == 0 && t[cur + 1] == 0) continue;
		if (t[cur] == 0)
		{
			dp[cur + 1] = dp[cur] - a[cur + 1];
			rec(cur + 1, n, a);
		}
		else 
		{
			dp[cur + 1] = dp[cur] + a[cur + 1];
			rec(cur + 1, n, a);
		}
	}
}
 
int main()
{
	int n;
	cin >> n;
	long a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	dp[0] = a[0];
	if (n == 1)
	{
		cout << a[0] << endl;
		return (0);
	}
	for (int i = 0; i < 2; i++) {
		t[0] = i;
		rec(0, n, a);
	}
	cout << sum << endl;
}