#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a, b, c;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		b.push_back(t);
	}	
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		c.push_back(t);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());

	int cnt = 0;
	bool break_f = false;
	for (int i = 0; i < a.size(); i++) {
		auto j = lower_bound(b.begin(), b.end(), a[i]);
		while (a[i] >= *j) {
			if (j == b.end()) {
				break_f = true;
				break;
			}
			b.erase(j);
		}
		if (j == b.end() || break_f) break;
		auto k = lower_bound(c.begin(), c.end(), *j);
		while (*j >= *k) {
			if (k == c.end()) {
				break_f = true;
				break;
			}
			c.erase(k);
		}
		if (k == c.end() || break_f) break;
		b.erase(j);
		c.erase(k);
		cnt++;
		//if (b.size() == 0 || c.size() == 0) break;
	}

	cout << cnt << endl;

}