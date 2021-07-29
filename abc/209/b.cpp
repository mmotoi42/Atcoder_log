#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,x;
	cin >> n >> x;
	long a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	long ans = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) ans += a[i] - 1;
		else ans += a[i];
	}

	if (x - ans < 0) cout << "No\n";
	else cout << "Yes\n";
}