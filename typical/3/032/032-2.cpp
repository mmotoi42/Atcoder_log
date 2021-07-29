#include <bits/stdc++.h>
using namespace std;

int n,m,a[11][11],x[50],y[50],xy[50][50];
int slct[11], used[11];
int cnt = INT_MAX;

void printslct(int idx)
{
	cout << idx << ":";
	for (int i = 0; i < n; i++) {
		cout << slct[i] << " ";
	}
	cout << endl;
}

void dfs(int idx)
{
	//printslct(idx);

	if (idx == n - 1){
		int t = 0;
		for (int i = 0; i < n; i++) {
			int s = slct[i];
			t += a[s][i];
		}
		cnt = min(cnt, t);
		return;
	}

	for (int i = 0; i < n; i++) {
		if (used[i]) continue;
		if (xy[slct[idx]][i]) continue;
		used[i]++;
		slct[idx + 1] = i;
		dfs(idx + 1);
		used[i]--;
		slct[idx + 1] = -1;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < m; i++) {
		xy[x[i] - 1][y[i] - 1]++;
		xy[y[i] - 1][x[i] - 1]++;
	}

	for (int i = 0; i < n; i++) {
		slct[i] = -1;
	}

	for (int i = 0; i < n; i++) {
		used[i]++;
		slct[0] = i;
		dfs(0);
		used[i]--;
		slct[0] = -1;
	}

	if (cnt == INT_MAX) cout << -1 << endl;
	else cout << cnt << endl;

}