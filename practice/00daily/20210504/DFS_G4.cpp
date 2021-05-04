#include <vector>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> M;
bool seen[510][510];

void dfs(int h, int w) {
	seen[h][w] = true;

	for (int dir = 0; dir < 4; dir++) {
		int nh = h + dy[dir];
		int nw = w + dx[dir];

		if (nh >= H || nh < 0 || nw < 0 || nw >= W) continue;
		if (seen[nh][nw]) continue;
		if (M[nh][nw] == '#') continue;

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