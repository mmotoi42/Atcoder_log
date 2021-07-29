#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<int> l(q), r(q), v(q);
	for (int i = 0; i < q; i++) cin >> l[i] >> r[i] >> v[i];

	vector<int> s(1);
	for (int i = 1; i < n; i++) {
		s.push_back(abs(a[i] - a[i - 1]));
	}
	// (l,r,v) = (2,3,1)
	// a =  1,2,3 -> 1,3,4
	// s = 0,1,1 -> 0,2,1
	// 端が変化しても変動しない

	long sum = 0;
	for (auto i = s.begin(); i != s.end(); i++) sum += abs(*i);
	for (int i = 0; i < q; i++) {
		long lb = abs(a[l[i] - 1] - a[l[i] - 2]);
		if (l[i] > 1) sum += v[i];
		if (r[i] < n - 1) sum -= v[i];

	}
}