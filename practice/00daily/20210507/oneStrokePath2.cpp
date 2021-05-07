#include <iostream>
#include <cstring>
using namespace std;

const int nmax = 8;
bool g[nmax][nmax];
int n, m;

int dfs(int v, int n, bool visited[nmax]) {

	bool all_visited = true;

	for (int i = 0; i < n; i++) {
		if (visited[i] == false) all_visited = false;
	}

	if (all_visited == false) return (1);

	int ret = 0;

	for (int i = 0; i < n; i++) {
		if (visited[i] == true) continue;
		if (g[v][i] == false) continue;

		visited[i] = true;
		ret += dfs(i, n, visited);
		visited[i] = false;
	}

	return (ret);
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a,b;
		cin >> a >> b;
		g[a - 1][b - 1] = true;
		g[b - 1][a - 1] = true;
	}

	bool visited[nmax];
	memset(visited, 0, sizeof(visited));

	visited[0] = true;
	cout << dfs(0, n, visited) << endl;
}