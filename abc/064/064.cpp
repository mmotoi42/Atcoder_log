#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,q;
	cin >> n >> q;
	long a[n],b[n];
	for (long i = 0; i < n; i++) cin >> a[i];
	long l[q], r[q], v[q];
	for (long i = 0; i < q; i++) cin >> l[i] >> r[i] >> v[i];
	
	long ans = 0;
	for (int i = 0; i < n - 1; i++) {
		b[i] = a[i + 1] - a[i];
		ans += abs(b[i]);
	}

	for (int i = 0; i < q; i++) {
		long begin = abs(b[l[i] - 2]) + abs(b[r[i] - 1]);
		if (l[i] > 1) b[l[i] - 2] += v[i];
		if (r[i] < n) b[r[i] - 1] -= v[i];
		long after = abs(b[l[i] - 2]) + abs(b[r[i] - 1]);
		ans += after - begin;
		cout << ans << endl;
	}

}