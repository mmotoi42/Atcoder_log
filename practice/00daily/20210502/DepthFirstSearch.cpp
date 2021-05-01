#include <iostream>
#include <stack>
using namespace std;
static const int N = 100;

int n;
int color[N];
int M[N][N];
int nt[N];
int tt;

// detect finish
int d[N],f[N];

// u is now position
int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		for (int i = 0; i < n; i++) {
			cout << nt[i] << ' ';
		}
		cout << endl;
		// 隣接行列としてのマップなので以下でuに隣接するvを取得できる
		// 隣接行列:行uに対して列vが隣接しているかどうかを返すmap
		if (M[u][v]) return v;
	}
	return (-1);
}

// dfs
void dfs_visit(int r) {
	// initialize next to
	for (int i = 0; i < n; i++) nt[i] = 0;

	// r is first position
	stack<int> s;
	s.push(r);
	color[r] = 1;
	d[r] = ++tt;

	while (!s.empty()) {
		int u = s.top();
		int v = next(u);
		// 他に向かう場所がなければ２にする
		if (v == -1) {
			s.pop();
			color[u] = 2;
			f[u] = ++tt;
		} 
		// 行く場所あってそこが未踏であれば１にしてスタックに積む
		else if (color[v] == 0) 
		{
			color[v] = 1;
			d[v] = ++tt;
			s.push(v);
		}
	}
}

void dfs() {

	// initialize
	for (int i = 0; i < n; i++) {
		color[i] = 0;
		nt[i] = 0;
	}
	tt = 0;

	// dfs
	for (int u = 0; u < n; u++) {
		if (color[u] == 0) dfs_visit(u);
	}

	// print
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