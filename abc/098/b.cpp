#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int max = 0;
	for (int i = 0; s[i]; i++) {
		set<char> x,y;
		for (int j = 0; j < i; j++) {
			x.emplace(s[j]);
		}
		for (int j = i; s[j]; j++) {
			y.emplace(s[j]);
		}
		int cnt = 0;
		for (auto iter = x.begin(); iter != x.end(); iter++) {
			if (y.find(*iter) != y.end()) {
				cnt++;
				//cout << i << ":" << *iter << endl;
			}
		}
		if (max < cnt) {
			max = cnt;
		}
	}
	cout << max << endl;
}