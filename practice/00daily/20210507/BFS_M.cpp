#include <iostream>
#include <queue>

using namespace std;
const int N = 100;
const int INF = (1 << 21);

int n, M[N][N];
int d[N];


void bfs(int s) {
	queue<int> q;
	q.push(s);
	for (int i = 0; i < n; i++) d[i] = INF;
	d[s] = 0;
	
	while (!q.empty()) {
		int u = q.front(); q.pop();
		for (int v = 0; v < n; v++) {
			if (M[u][v] == 0) continue;
			if (d[v] != INF) continue;
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
}

int main() {
	int u, k, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			M[u - 1][v - 1] = 1;
		}
	}

	bfs(0);

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << ((d[i] == INF) ? (-1) : d[i]) << endl;
	}
}