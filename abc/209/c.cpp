#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	long c[n];
	for (int i = 0; i < n; i++) cin >> c[i];

	map<int, int> mp;
	for (int i = 0; i < n; i++) mp[c[i]]++;
	for (auto i = mp.begin(); i != mp.end(); i++) {
		if ((*i).first < (*i).second) {
			cout << 0 << endl;
			return(0);
		}
	}

	sort(c, c + n);

	long cnt = 1;
	for (int i = 0; i < n; i++) {
		cnt *= (c[i] - i);
		cnt %= 1000000007;
	}

	cout << cnt << endl;
}