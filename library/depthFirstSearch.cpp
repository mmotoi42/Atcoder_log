#include <iostream>
#include <stack>
using namespace std;
static const int N = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

// Map
int M[N][N];

// node num
int n;

// timestamp : first visit time
int d[N];

// timestamp : search finish time
int f[N];

// node status
int color[N];

// timestamp
int tt;

// 
int nt[N];

int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		if (M[u][v]) return v;
	}
	return (-1);
}


void dfs_visit(int r) {

	// initialize
	for (int i = 0; i < n; i++) {
		nt[i] = 0;
	}

	stack<int> S;
	S.push(r);
	color[r] = GRAY;
	d[r] = ++tt;

	while (!S.empty()) {
		int u = S.top();
		int v = next(u);
		if (v != -1) {
			if (color[v] == WHITE) {
				color[v] = GRAY;
				d[v] = ++tt;
				S.push(v);
			}
		} else {
			S.pop();
			color[u] = BLACK;
			f[u] = ++tt;
		}
	}
}

void dfs() {
	// initialize
	for (int i = 0; i < n; i++) {
		color[i] = WHITE;
		nt[i] = 0;
	}
	tt = 0;

	// u is node No
	for (int u = 0; u < n; u++) {
		if (color[u] == WHITE) dfs_visit(u);
	}

	// print
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
}

void make_Graph() {
	// u:node No 
	// k:degree num 
	// v:vertex num
	int u, k, v;
	cin >> n;

	for (int i = 0; i < n; i++ ){
		for (int j = 0; j < n; j++) {
			M[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			M[u - 1][v - 1] = 1;
		}
	}
}

int main() {

	make_Graph();

	dfs();
}