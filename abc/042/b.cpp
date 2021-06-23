#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,l;
	cin >> n >> l;
	multiset<string> s;
	for (int i = 0; i < n; i++) {
		string t;
		cin >> t;
		s.emplace(t);
	}
	string ans;
	for (auto iter = s.begin(); iter != s.end(); iter++) {
		ans += *iter;
	}
	cout << ans << endl;
}