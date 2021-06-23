#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	auto max = mp.begin();
	for (auto i = mp.begin(); i != mp.end(); i++) {
		if ((*max).second < (*i).second) {
			max = i;
		}
	}
	cout << (*max).first << " " << (*max).second << endl;
}