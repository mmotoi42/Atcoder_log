#include <bits/stdc++.h>
using namespace std;

map<int, vector<pair<int, int>>> mp;
map<int, vector<bool>>seen;
int under;
long sum;
int n,m;
int s,g;

void dfs(int cur)
{
	for (auto i = mp[cur].begin(); i != mp[cur].end(); i++) {
		if (seen[cur][(*i).second]) continue;
		
	}
}

void clear()
{
	for (auto i = seen.begin(); i != seen.end(); i++) {
		for (auto j = (*i).second.begin(); j != (*i).second.end(); j++) {
			*j = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	int a[m], b[m], c[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
		pair<int, int> p;
		p.first = b[i];
		p.second = c[i];
		mp[a[i]].push_back(p);
		seen[a[i]].push_back(0);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			for (int k = 1; k <= n; k++) {
				under = k;
				s = i;
				g = j;
				dfs(s, g);
				clear();
			}
		}
	}

	cout << sum << endl;

}