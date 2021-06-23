//template                                                  
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	map<long, long> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	long sum = 0;
	for (auto i = mp.begin(); i != mp.end(); i++) {
//		cout << (*i).first << ":" << (*i).second << endl;
		for (auto j = next(i, 1); j != mp.end(); j++) {
			sum += (((*i).first - (*j).first) * ((*i).first - (*j).first)) * (*i).second * (*j).second;
		}
	}
	cout << sum << endl;
}