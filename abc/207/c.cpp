#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t[n], l[n], r[n];
	multiset<pair<double, double>> st;
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> l[i] >> r[i];
		pair<double,double> tmp;
		if (t[i] == 1) {
			tmp.first = l[i];
			tmp.second = r[i];
		}
		else if (t[i] == 2) {
			tmp.first = l[i];
			tmp.second = r[i] - 0.1;
		}
		else if (t[i] == 3) {
			tmp.first = l[i] + 0.1;
			tmp.second = r[i];
		}
		else {
			tmp.first = l[i] + 0.1;
			tmp.second = r[i] - 0.1;
		}
		st.emplace(tmp);
	}

	int cnt = 0;
	for (auto i = st.begin(); i != st.end(); i++) {
		for (auto j = next(i, 1); j != st.end(); j++) {
			//cout << (*i).first << " " << (*i).second << ":" << (*j).first << " " << (*j).second << endl;
			if ((*i).first > (*j).second) continue;
			if ((*i).second < (*j).first) continue;
			//cout << (*i).first << " " << (*i).second << ":" << (*j).first << " " << (*j).second << endl;
			cnt++;
		}
	}
	cout << cnt << endl;
}