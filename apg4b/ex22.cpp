//template                                                  
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	// map<int, int> mp;
	// for (int i = 0; i < n; i++) {
	// 	int a,b;
	// 	cin >> a >> b;
	// 	mp[b] = a;
	// }
	// for (auto iter = mp.begin(); iter != mp.end(); iter++) {
	// 	cout << (*iter).second << " " << (*iter).first << endl;
	// }
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		pair<int,int> p;
		cin >> p.second >> p.first;
		v.push_back(p);
	}
	sort(v.begin(), v.end());
	for (auto iter = v.begin(); iter != v.end(); iter++) {
		cout << (*iter).second << " " << (*iter).first << endl;
	}
}