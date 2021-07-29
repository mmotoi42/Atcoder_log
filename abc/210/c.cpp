#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	long c[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	map<int, int> mp;
	int maxv = 0;
	for (int i = 0; i < n; i++) {
		if (i < k) mp[c[i]]++;
		else {
			mp[c[i]]++;
			mp[c[i - k]]--;
			if (mp[c[i - k]] == 0) mp.erase(c[i - k]);
		}
		maxv = max((int)mp.size(), maxv);
	}
	cout << maxv << endl;
}