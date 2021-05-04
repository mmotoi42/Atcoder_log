#include <iostream>
#include <cstring>
#include <vector>
#include <string>
using namespace std;

const int dy[4] = {0, 1, 0, -1};
const int dx[4] = {1, 0, -1, 0};

int H, W;
vector<string> M;
bool seen[510][510];

void dfs(int h, int w) {
	seen[h][w] = true; // check now position

	for (int dir = 0; dir < 4; dir++) {
		int nh = h + dx[dir]; //next h
		int nw = w + dy[dir];

		if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
		if (M[nh][nw] == '#') continue;
		if (seen[nh][nw]) continue;

		dfs(nh, nw);
	}
}

int main() {
	cin >> H >> W;
	M.resize(H);
	for (int h = 0; h < H; h++) {
		cin >> M[h];
	}

	int sh,sw,gh,gw;
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			if (M[h][w] == 's') sh = h; sw = w;
			if (M[h][w] == 'g') gh = h; gw = w;
		}
	}

	memset(seen, 0, sizeof(seen));
	dfs(sh, sw);

	if (seen[gh][gw]) cout << "Yes\n";
	else cout << "No\n";
}