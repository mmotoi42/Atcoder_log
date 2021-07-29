#include <bits/stdc++.h>
using namespace std;
long double pie = 3.14159265358979;

int main()
{
	int t,l,x,y,q;
	cin >> t >> l >> x >> y >> q;
	int m[q];
	for (int i = 0; i < q; i++) cin >> m[i];

	for (int i = 0; i < q; i++) {
		// 現在位置の座標を取得
		long double cx = 0;
		long double cy = l/2.0 * sin((360.0 - (360.0 * m[i]/t)) * (pie / 180.0)) + 0;
		long double cz = l/2.0 * cos((180.0 - (360.0 * m[i]/t)) * (pie / 180.0)) + l/2.0;
		long double height = cz;
		// x * xとすると中でoverflowするので注意
		long double distance = sqrt((0.0 - x) * (0.0 - x) + (y - cy) * (y - cy));
		long double rad = atan(height / distance);
		long double depression = rad * 180.0l / pie;
		//cout << cx << " " << cy << " " << cz << " " << height << " " << distance << " " << rad << " " << depression << endl;
		cout << setprecision(12) << depression << endl;
	}
}