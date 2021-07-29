#include <bits/stdc++.h>
using namespace std;

string t = "";

int main()
{
	string s;
	cin >> s;
	string choku = "chokudai";

	for (int i = 0; s[i]; i++) {
		if (choku.find(s[i]) != string::npos) t.push_back(s[i]);
	}

	map<int, int> mp[8];
	for (int i = 0; t[i]; i++) {
		int idx = (int)choku.find(t[i]);
		if (idx == 0) mp[idx][i]++;
		else {
			mp[idx][i] = mp[idx - 1].size();
		}
	}

	long cnt = 0;
	for (int i = 0; i < 8; i++) {
		long tmp = 0;
		for (auto j = mp[i].begin(); j != mp[i].end(); j++) {
			tmp += (*j).second;
			tmp %= 1000000007;
		}
		cnt = max(tmp, cnt);
	}
	cout << cnt << endl;
}