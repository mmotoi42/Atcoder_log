#include <bits/stdc++.h>
using namespace std;
int main() {
	long n;
	cin >> n;
	map<int, int>mp;
	// all pattern num
	long ans = (n - 1) * n / 2;
	
	while (n--) {
		int k;
		cin >> k;
		ans -= mp[k];
		//cout << n << ":" << k << ":" << mp[k] << ":" << ans << endl;
		mp[k]++;
	}
	cout << ans << endl;
}