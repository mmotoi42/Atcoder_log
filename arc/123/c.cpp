#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++) {
		int maxv = 1;
		cin >> s;
		for (int j = 0; s[j]; j++) {
			if (s[j] == '4' || s[j] == '5' || s[j] == '6') maxv = max(maxv, 2);
			if (s[j] == '7' || s[j] == '8' || s[j] == '9') maxv = max(maxv, 3);
			if (s[j] == '0') maxv = max(maxv, 4);
		}
		reverse(s.begin(), s.end());
		string r = to_string(s[1]);
		r += s[0];
		cout << r << endl;
		if (r == "91" || r == "81" || r == "71" || r == "61" || r == "51" || r == "41")
			maxv = 4;
		cout << maxv << endl;
	}
}