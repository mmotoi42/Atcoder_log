#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> M;
bool seen[510][510];

typedef struct s_block {
	int h,w;
} block;

void dfs(int h, int w) {
	seen[h][w] = true;

	for (int dir = 0; dir < 4; dir++) {
		int nh = h + dx[dir];
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
	for (int h = 0; h < H; ++h) cin >> M[h];

	block s,g;
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			if (M[h][w] == 's') s.h = h, s.w = w;
			if (M[h][w] == 'g') g.h = h, g.w = w;
		}
	}

	for (int i = 0; i < 100; i++) {
			printf("%ld\n", seen[i + 1] - seen[i]);
	}

	memset(seen, 0, sizeof(seen));
	dfs(s.h, s.w);

	if (seen[g.h][g.w]) cout << "Yes\n";
	else cout << "No\n";
	
}