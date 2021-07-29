#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][6];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> a[i][j];
		}
	}
	long sum = 0;
	//   (a[0][0] * a[1][0] * a[2][0] * a[3][0] * a[4][0] * a[5][0] * a[6][0])
	// + (a[0][1] * a[1][1] * a[2][1] * a[3][1] * a[4][1] * a[5][1] * a[6][1])
	
}