#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

vector<string> g;
int seen[510][510];
int H,W;

const int dy[4] = {0, 1, 0, -1};
const int dx[4] = {1, 0, -1, 0};

void dfs(int h, int w) {
	seen[h][w] = 1;

	for (int i = 0; i < 4; i++) {
		int nh = h + dy[i];
		int nw = w + dx[i];
		if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
		if (g[nh][nw] == '#') continue;
		if (seen[nh][nw] == 1) continue;

		dfs(nh, nw);
	}
}

int main() {
	cin >> H >> W;
	g.resize(H);
	for (int h = 0; h < H; h++) {
		cin >> g[h];
	}

	int sh,sw,gh,gw;

	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			if (g[h][w] == 's') sh = h, sw = w;
			if (g[h][w] == 'g') gh = h, gw = w;
		}
	}

	memset(seen, 0, sizeof(seen));
	dfs(sh, sw);

	if (seen[gh][gw]) cout << "Yes\n";
	else cout << "No\n";
}