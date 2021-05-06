#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int H,W;
vector<string> M;
int seen[510][510];

typedef struct s_block {
	int h,w;
} t_block;

const int dy[4] = {1, 0, -1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int h, int w) {
	seen[h][w] = 1;

	for (int i = 0; i < 4; i++) {
		int nh = h + dy[i];
		int nw = w + dx[i];

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

	t_block g, s;
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			if (M[h][w] == 's') s.h = h, s.w = w;
			if (M[h][w] == 'g') g.h = h, g.w = w;
		}
	}

	dfs(s.h, s.w);

	if (seen[g.h][g.w]) cout << "Yes\n";
	else cout << "No\n";
}