#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int q;
	cin >> q;
	int b[q];
	for (int i = 0; i < q; i++) cin >> b[i];

	sort(a, a + n);
	for (int i = 0; i < q; i++) {
		auto iter = lower_bound(a, a + n, b[i]);
		int pos = iter - a;
		if (pos == n) cout << abs(a[pos - 1] - b[i]) << endl;
		else if (pos == 0) cout << abs(a[pos] - b[i]) << endl;
		else cout << min(abs(a[pos] - b[i]), abs(a[pos - 1] - b[i])) << endl; 
	}
}