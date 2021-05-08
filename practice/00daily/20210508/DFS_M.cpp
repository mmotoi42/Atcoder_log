#include <iostream>
#include <stack>
#include <vector>
#include <cstring>
using namespace std;

#define N 100
int n, nt[N],  d[N], f[N], tt;
int color[N];
int M[N][N];

int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		if (M[u][v]) return v;
	}
	return (-1);
}

void dfs_visit(int r) {
	memset(nt, 0, sizeof(nt));

	stack<int> s;
	s.push(r);
	d[r] = ++tt;
	color[r] = 1;

	while (!s.empty()) {
		int u = s.top();
		int v = next(u);
		if (v == -1) {
			s.pop();
			color[u] = 2;
			f[u] = ++tt;
		} else if (color[v] == 0) {
			s.push(v);
			color[v] = 1;
			d[v] = ++tt;
		}
	}
}

void dfs() {
	memset(nt, 0, sizeof(nt));
	memset(color, 0, sizeof(color));
	tt = 0;

	for (int i = 0; i < n; i++) {
		if (color[i] == 0) dfs_visit(i);
	}
}

int main() {
	cin >> n;
	memset(M, 0, sizeof(M));

	int k,u,v;
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