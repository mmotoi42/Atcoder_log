#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	int cost = INT_MAX;
	int ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) cost = a[i] + b[i];
			else cost = max(a[i], b[i]);
			ans = min(ans, cost); 
		}
	}
	cout << ans << endl;
}