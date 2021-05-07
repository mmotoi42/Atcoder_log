#include <iostream>
#include <stack>
#include <cstring>

using namespace std;
#define N 100

int M[N][N], nt[N], tt, color[N], f[N], d[N], n;

int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		if (M[u][v]) return (v);
	}
	return (-1);
}

void dfs_visit(int r) {
	for (int i = 0; i < n; i++) {
		nt[i] = 0;
	}

	stack<int> s;
	s.push(r);
	d[r] = ++tt;
	color[r] = 1;

	while (!s.empty()) {
		int u = s.top();
		int v = next(u);
		if (v == -1) {
			s.pop();
			f[u] = ++tt;
			color[u] = 2;
		} else if (color[v] == 0) {
			s.push(v);
			color[v] = 1;
			d[v] = ++tt;
		}
	}
}

void dfs() {
	for (int i = 0; i < n; i++) {
		nt[i] = 0;
		color[i] = 0;
	}
	tt = 0;

	for (int i = 0; i < n; i++) {
		if (color[i] == 0) dfs_visit(i);
	}
}

int main() {
	cin >> n;
	memset(M, 0, sizeof(M));
	int u,k,v;
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			M[u - 1][v - 1] = 1;
		}
	}

	dfs();

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
}