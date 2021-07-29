#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<int> cnt(10);
	for (int i = 0; s[i]; i++) cnt[s[i] - '0']++;

	// for (int i = 0; i < 10; i++) cout << cnt[i] << " ";
	// cout << endl;

	if (s.size() <= 4) {
		sort(s.begin(), s.end());
		do{
			int n = stoi(s);
			if (n % 8 == 0) {
				cout << "Yes\n";
				return (0);
			}
		}while (next_permutation(s.begin(), s.end()));
		cout << "No\n";
		return (0);
	}

	for (int i = 0; i * 8 < 10000; i++) {
		string str = to_string(i * 8);
		bool failure = false;
		vector<int>tmp(10);
		for (int j = 0; j < 10; j++) {
			tmp[j] = cnt[j];
		}
		for (int j = 0; str[j]; j++) {
			tmp[str[j] - '0']--;
			if (tmp[str[j] - '0'] < 0) {
				// cout << str << endl;
				failure = true;
			} 
		}
		if (!failure) {
			//out << str << endl;
			if (str.size() < 4) continue;
			cout << "Yes\n";
			return (0);
		}
	}
	cout << "No\n";
}