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
		int idx = lower_bound(a, a + n, b[i]) - a;
		if (idx == 0) cout << abs(b[i] - a[0]) << endl;
		else if (idx == n) cout << abs(b[i] - a[n - 1]) << endl;
		else cout << min(abs(a[idx] - b[i]), abs(a[idx - 1] - b[i])) << endl;;
	}
}