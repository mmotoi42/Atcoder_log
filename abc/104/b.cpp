#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	bool failure = false;
	int cnt = 0;
	for (int i = 0; s[i]; i++) {
		if (i == 0) {
			if (s[i] != 'A') failure = true;
		}
		if (i >= 2 && i < s.size() - 1) {
			if (s[i] == 'C') cnt++;
			if (cnt > 1) failure = true;
		}
		else if (s[i] == 'C') {
			failure = true;
		}
		if (s[i] != 'A' && s[i] != 'C') {
			if (isupper(s[i])) failure = true;
		}
	}
	if (failure || cnt == 0) cout << "WA\n";
	else cout << "AC\n";
}