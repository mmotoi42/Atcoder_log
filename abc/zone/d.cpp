#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t = "";
	cin >> s;
	int f = 1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'R') f *= -1;
		else if (f == 1) {
			if (*t.end() == s[i]) t.pop_back();
			else t.push_back(s[i]);
		}
		else if (f == -1) {
			if (*t.begin() == s[i]) t.erase(0, 1);
			else t = s[i] + t;
		}
	}
	if (f == -1) reverse(t.begin(), t.end());
	for (int i = 0; i < t.size() - 1; i++) {
		if (t.size() == 0) break;
		while (t[i] == t[i + 1] && t.size()) {
			t.erase(i, 2);
			if (i > 0) i--;
		}
	}
	cout << t << endl;
}