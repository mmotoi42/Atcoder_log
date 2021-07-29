#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	pair<int, int> p[n];
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			for (int k = 0; k < n; k++) {
				if (i == k) continue;
				if (j == k) continue;
				if ((p[k].first - p[j].first) * (p[j].second - p[i].second) == (p[j].first - p[i].first) * (p[k].second - p[j].second)) {
					cout << "Yes\n";
					return (0);
				}
			}
		}
	}
	cout << "No\n";
	return (0);
}