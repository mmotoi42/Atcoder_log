#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,k;
	cin >> n >> k;
	long a[n];
	map<long, long> mp;
	for (long i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = 0;
	}

	long all = 0;
	if (k >= n)
	{
		all = k / n;
		k -= all * n;
	}
	for (auto iter = mp.begin(); iter != mp.end(); iter++) {
		if (k == 0) break;
		(*iter).second++;
		k--;
	}

	for (long i = 0; i < n; i++) { 
		cout << mp[a[i]] + all << endl;
	}

}