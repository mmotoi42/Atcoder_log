#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int a[n], b[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	unsigned long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += abs(a[i] - b[i]);
	}
	long diff = k - sum;
	if (diff < 0) cout << "No\n";
	else if (diff % 2 == 0) cout << "Yes\n";
	else cout << "No\n";
}