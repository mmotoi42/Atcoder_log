#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, q;
	cin >> n >> q;
	unsigned long a[n];
	unsigned long k[q];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < q; i++) cin >> k[i];
	sort(a, a + n);
	for (int i = 0; i < q; i++) {
		unsigned long *lkey = lower_bound(a, a + n, k[i]);
		unsigned long diff = (*lkey == a[0]) ? lkey - a + 1 : lkey - a;
		unsigned long ans = k[i] + diff;
		if (lkey + (*lkey - (lkey - a)) > a + n) cout << k[i] + n << endl;
		else if (lkey + (*lkey - (lkey - a)) < a + n) {
			unsigned long *ukey = upper_bound(lkey, a + n, ans);
			ans += ukey - lkey ;
			cout << diff << ":" << *lkey << ":" << *ukey << endl;
			cout << ans << endl;
		}
		else cout << ans << endl;
	}
}