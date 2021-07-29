#include <bits/stdc++.h>
using namespace std;
long double pie = 3.14159265358979;
int main()
{
	long t,l,x,y,q;
	cin >> t >> l >> x >> y >> q;
	long e[q];
	for (int i = 0; i < q; i++) cin >> e[i];

	for (int i = 0; i < q; i++) {
		long double cx = 0;
		long double cy = l / 2.0 * sin((360.0 - (360.0 * e[i] / t)) * pie / 180.0);
		long double cz = l / 2.0 * cos((180.0 - (360.0 * e[i] / t)) * pie / 180.0) + l / 2.0;
		long double dist = sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));
		long double height = cz;
		long double angle = atan2(height, dist);
		long double rad = angle * 180.0 / pie;
		cout << setprecision(12) << rad << endl;
	}
}