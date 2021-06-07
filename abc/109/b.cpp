#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string w[n];
	set<string> s;
	bool failure = false;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		if (s.find(w[i]) != s.end()) {
			failure = true;
		}
		if (i > 0) {
			if (w[i - 1].back() != w[i][0]) failure = true;
		}
		s.emplace(w[i]);
	}

	if (failure) cout << "No\n";
	else cout << "Yes\n";
}