#include <bits/stdc++.h>
using namespace std;
long double pi = 3.14159265358979;

int main()
{
	int t,l,x,y,q;
	cin >> t >> l >> x >> y >> q;
	int e[q];
	for (int i = 0; i < q; i++) cin >> e[i];

	for (int i = 0; i < q; i++) {
		long double cx = 0;
		// 逆回転なので360から引く l/2:半径 360*e[i]/t:角度 角度*pi/180.0:角度をラジアンに変換
		long double cy = (l / 2.0) * sin((360 - (360.0 * e[i] / t)) * (pi / 180.0));
		// 高さにおいては中心に対して負の位置からスタートなので180から引いて反転させる 最後に足しているのは円中心の座標
		long double cz = l/2.0 * cos((180 - (360.0 * e[i] / t)) * (pi / 180.0)) + l/2.0;
		long double dst = sqrt((cx - x) * (cx - x) + (cy - y) * (cy - y));
		long double height = cz;
		// atan:高さと底辺からθを出す
		// atan2:直行座標で考える。底辺が負の値のときも対応できる
		long double hukaku = atan(height/dst);
		cout << setprecision(12) << hukaku * 180.0l / pi << endl;
	}
}