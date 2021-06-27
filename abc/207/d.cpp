#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> s,t;
	for (int i = 0; i < n; i++) {
		pair<int, int> p;
		cin >> p.first >> p.second;
		s.push_back(p);
	}
	for (int i = 0; i < n; i++) {
		pair<int, int> p;
		cin >> p.first >> p.second;
		t.push_back(p);
	}
	vector<double, double> sl,tl;
	// sの群の形とtの群の形が一致しているかどうか。
	// 時計回りにp度回転させるｰ>点対称おｋ
	// 各点の間の距離が一致？
	
	
}