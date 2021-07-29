#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; s[i]; i++) {
		if (s[i] == '1') {
			if (i % 2 == 0)
				cout << "Takahashi\n";
			else
				cout << "Aoki\n";
			return (0);
		}
	}
}