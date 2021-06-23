#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	set<string> t;
	for (int i = 0; s[i + k - 1]; i++) {
		t.emplace(s.substr(i, k));
		cout << s.substr(i, k);
	}
	cout << t.size() << endl;
}