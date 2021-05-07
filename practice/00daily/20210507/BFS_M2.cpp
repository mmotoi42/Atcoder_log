#include <queue>
#include <iostream>
#include <limits.h>
#include <cstring>
using namespace std;

const int N = 100;
const int INF = INT_MAX;
int n, g[N][N], d[N];

void dfs(int s) {
	queue<int> q;
	q.push(s);
	memset(d, INF, sizeof(d));
	d[s] = 0;

	while (!q.empty()) {
		int u = q.front(); q.pop();
		for (int v = 0; v < n; v++) {
			if (d[v] != INF) continue;
			if (g[u][v] == 0) continue;
			q.push(v);
			d[v] = d[u] + 1;
		}
	}
}

int main() {
	int u,k,v;
	cin >> n;
	memset(g, 0, sizeof(g));
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			g[u-1][v-1] = 1;
		}
	}

	dfs(0);

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << (d[i] == INF ? (-1) : d[i]) << endl;;
	}
}