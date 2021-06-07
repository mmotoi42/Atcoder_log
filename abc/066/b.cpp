#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string t = "";
	string u = "";
	while (s.length() != 0) {
		s.pop_back();
		t = "",u = "";
		int i = 0;
		while (i < s.length() / 2) {
			t.push_back(s[i]);
			i++;
		}
		while (i < s.length()) {
			u.push_back(s[i]);
			i++;
		}
		//cout << t << ":" << u << endl;
		if (t == u) break;
	}
	cout << t.length() * 2 << endl;
}