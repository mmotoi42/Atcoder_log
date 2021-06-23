#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int minv = INT_MAX;	
	for (int i = 1; i <= n / 2; i++) {
		for (int j = 1; j <= n / 2; j++) {
			if (i * j > n) break;
			int t = abs(i - j) + n - (i * j);
			minv = min(t, minv);
		}
	}
	if (n == 1)
		cout << 0 << endl;
	else
		cout << minv << endl;
}