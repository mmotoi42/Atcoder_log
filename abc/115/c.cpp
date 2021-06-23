#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int h[n];
	for (int i = 0; i < n; i++) cin >> h[i];
	sort(h, h + n);
	int diff = INT_MAX;
	for (int i = 0; i + k - 1 < n; i++) {
		//cout << h[i] << endl;
		diff = min(diff, h[i + k - 1] - h[i]);
	}
	cout << diff << endl;
}