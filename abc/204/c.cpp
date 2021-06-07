#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> city(2005);
int route[2005];
int cnt = 0;

int rec(int st, int en)
{
	for (auto iter = city[en].begin(); iter != city[en].end(); iter++) {
		if (route[*iter] > 0) continue;
		if (st == *iter) continue;
		route[*iter]++;
		//cout << st << ":" << *iter << endl;
		cnt++;
		rec(st, *iter);
	}
	return (0);
}

int main()
{
	cin >> n >> m;
	int a,b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		city[a - 1].push_back(b - 1);
	}
	for (int i = 0; i < n; i++) {
		memset(route, 0, sizeof(route));
		for (auto iter = city[i].begin(); iter != city[i].end(); iter++) {
			if (route[*iter] > 0) continue;
			if (i == *iter) continue;
			route[*iter]++;
			//cout << i << ":" << *iter << endl;
			cnt++;
			rec(i, *iter);
		}
	}
	cout << cnt + n << endl;
}