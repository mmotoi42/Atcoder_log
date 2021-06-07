#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin >> h >> w;
	string a[h];
	bool col[w], row[h];
	memset(col, 0, sizeof(col));
	memset(row, 0, sizeof(row));
	for (int i = 0; i < h; i++) {
		cin >> a[i];
		if (a[i].find('#') == string::npos) row[i] = true;
	}
	bool found = false;
	for (int i = 0; i < w; i++) {
		found = false;
		for (int j = 0; j < h; j++) {
			if (a[j][i] == '#') found = true;
		}
		if (found == false) col[i] = true;
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			//cout << col[j] << ":" << row[i] << endl;
			if (col[j] || row[i]) continue;
			cout << a[i][j];
		}
		if (row[i]) continue;
		cout << endl;
	}
}