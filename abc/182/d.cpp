#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long a[n];
	for (int i = 0; i < n; i++) { 
		cin >> a[i];
		if (i == 0) continue;
		a[i] += a[i - 1];
		//cout << a[i] << endl;
	}
	long pos[n + 1];
	pos[0] = 0;
	for (int i = 1; i <= n; i++) {
		pos[i] = pos[i - 1] + a[i - 1];
		//cout << pos[i] << endl;
	}
	long maxv = 0;
	long maxpos = LONG_MIN;
	for (int i = 0; i < n; i++) {
		//cout << maxv << " " << pos[i] << " " << maxpos << endl;
		maxpos = max(maxpos, a[i]);
		maxv = max(pos[i] + maxpos, maxv);
	}

	cout << maxv << endl;

}