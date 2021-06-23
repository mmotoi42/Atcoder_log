#include <bits/stdc++.h>
using namespace std;

int g[100][100];

void fill_x(int l, int r)
{
	for (int i = 0; i < 100; i++) {
		for (int j = l; j < r; j++) {
			g[i][j] = 1;
		}
	}
}

void fill_y(int b, int t)
{
	for (int i = b; i < t; i++) {
		for (int j = 0; j < 100; j++) {
			g[i][j] = 1;
		}
	}
}

int main()
{
	int w,h,n;
	cin >> w >> h >> n;
	int x[n], y[n], a[n];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			g[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> a[i];
		if (a[i] == 1) fill_x(0, x[i]);
		if (a[i] == 2) fill_x(x[i], w);
		if (a[i] == 3) fill_y(0, y[i]);
		if (a[i] == 4) fill_y(y[i], h);
	}

	int cnt = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (g[i][j] == 0) cnt++;
		}
	}

	// for (int i = 0; i < h; i++) {
	// 	for (int j = 0; j < w; j++) {
	// 		cout << g[i][j];
	// 	}
	// 	cout << endl;
	// }

	cout << cnt << endl;

}