#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int H,W;
vector<string> map;
bool seen[510][510];

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

void dfs(int h, int w) {
	seen[h][w] = true;

	for (int i = 0; i < 4; i++) {
		int nh = h + dy[i];
		int nw = w + dx[i];

		if (nh < 0 || nw < 0 || nh >= H || nw >= W) continue;
		if (seen[nh][nw]) continue;
		if (map[nh][nw] == '#') continue;

		dfs(nh, nw);
	}
}

int main() {
	cin >> H >> W;
	map.resize(H);
	for (int i = 0; i < H; i++) {
		cin >> map[i];
	}

	int sh,sw,gh,gw;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (map[i][j] == 's') sh = i, sw = j; // sh = i; sw = j;だと挙動が変わる
			if (map[i][j] == 'g') gh = i, gw = j;
		}
	}

	memset(seen, 0, sizeof(seen));
	dfs(sh, sw);

	if (seen[gh][gw]) cout << "Yes\n";
	else cout << "No\n";
}