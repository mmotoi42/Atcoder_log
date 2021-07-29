#include <bits/stdc++.h>
using namespace std;

int n;
int a[100][100];
int x[100],y[100];
int selected[100];
int seen[100];
int m;

long t = LONG_MAX;

void dfs(int idx)
{
	if (idx == n) {
		long sum = 0;
		bool bad = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i > 0 && x[j] - 1 == selected[i] && y[j] - 1 == selected[i - 1]) bad = true;
				if (i > 0 && x[j] - 1 == selected[i - 1] && y[j] - 1 == selected[i]) bad = true;
			}
		}
		if (bad) return;
		for (int i = 0; i < n; i++) {
			sum += a[i][selected[i]];
			//cout << selected[i] << " ";
		}
		//cout << endl;
		t = min(t, sum);
		return ;
	}

	for (int i = 0; i < n; i++) {
		if (seen[i]) continue;

		selected[idx] = i;
		seen[i]++;
		dfs(idx + 1);
		seen[i]--;
		selected[idx] = 0;
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
	for (int i = 0; i < m; i++) cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++) {
		selected[0] = i;
		seen[i]++;
		dfs(1);
		selected[0] = 0;
		seen[i]--;
	}

	if (t == LONG_MAX) cout << -1 << endl;
	else cout << t << endl;
}