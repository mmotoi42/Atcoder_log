#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin >> h >> w;
	long a[h][w];
	long row[h] = {0};
	long col[w] = {0};
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			row[i] += a[i][j];
			col[j] += a[i][j];		
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << row[i] + col[j] - a[i][j] << " ";
		}
		cout << endl;
	}
}