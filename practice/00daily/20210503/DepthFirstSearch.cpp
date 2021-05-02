#include <iostream>
#include <stack>
using namespace std;
static const int N = 100;

int n;
int color[N];
int M[N][N];
int nt[N];
int tt;

int d[N], f[N];

int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		for (int i = 0; i < n; i++) {
			cout << nt[i] << ' ';
		}
		cout << endl;
		if (M[u][v]) return v;
	}
	return (-1);
}

void dfs_visit(int r) {
	for (int i = 0; i < n; i++) {
		nt[i] = 0;
	}

	stack<int> s;
	s.push(r);
	color[r] = 1;
	d[r] = ++tt;

	while (!s.empty()) {
		int u = s.top();
		int v = next(u);
		if (v == -1) {
			s.pop();
			color[u] = 2;
			f[u] = ++tt;
		}
		else if (color[v] == 0) {
			color[v] = 1;
			d[v] = ++tt;
			s.push(v);
		}
	}
}

void dfs()
{
	for (int i = 0; i < n; i++) {
		color[i] = 0;
		nt[i] = 0;
	}
	tt = 0;

	for (int u = 0; u < n; u++) {
		if (color[u] == 0) dfs_visit(u);
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
}

int main()
{
	int u, k, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int i = 0; i < k; i++) {
			cin >> v;
			M[u - 1][v - 1] = 1;
		}
	}

	dfs();
}