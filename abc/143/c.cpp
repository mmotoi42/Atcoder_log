#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	cin >> s;
	string t;
	t += s[0];
	for (int i = 1; s[i]; i++) {
		if (s[i] == s[i - 1]) continue;
		t += s[i];
	}
	cout << t.length() << endl;
}