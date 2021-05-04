#include <vector>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int H,W;
int M[55][55];
bool seen[55][55];

const int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dy[8] = {1, 0, -1, 0, 1, -1, 1, -1};

void map_create() {
	memset(M, 0, sizeof(M));
	
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			cin >> M[h][w];
		}	
	}
}

void dfs(int h, int w) {
	seen[h][w] = true;

	for (int i = 0; i < 8; i++) {
		int nh = h + dy[i];
		int nw = w + dx[i];

		if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
		if (seen[nh][nw]) continue;
		if (M[nh][nw] == 0) continue;

		dfs(nh, nw);
	}
}

int main() {
	vector<int> island_num;
	while (true) {
		cin >> W >> H;
		if (W == 0 && H == 0) break;
		int cnt = 0;
		map_create();
		memset(seen, 0, sizeof(seen));
		
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				if (!seen[h][w] && M[h][w] == 1) {
					cnt++;
					dfs(h, w);
				}
			}
		}

		island_num.push_back(cnt);
	}

	for (vector<int>::iterator it = island_num.begin(); it < island_num.end(); it++) {
		cout << *it << endl;
	}
}