#include <bits/stdc++.h>
using namespace std;

int n,q;
map<int, vector<int>> mp;
map<int, int> seen;
int c[100000], d[100000];
map<int, int> result;
int s,g;
int cnt;
int ans;

void dfs(int cur)
{
	if (cur == g) {
		ans = min(ans, cnt);
		return ;
	}
	for (auto i = mp[cur].begin(); i != mp[cur].end(); i++) {
		if (seen[*i] == 1) continue;
		seen[*i]++;
		cnt++;
		dfs(*i);
		seen[*i]--;
		cnt--;
	}
}

int main()
{
	cin >> n >> q;
	for (int i = 0; i < n - 1; i++) {
		int a,b;
		cin >> a >> b;
		mp[a].push_back(b);
		mp[b].push_back(a);
	}
	for (int i = 0; i < q; i++) {
		cin >> c[i] >> d[i];
	}

	for (int i = 0; i < q; i++) {
		s = c[i];
		g = d[i];
		ans = INT_MAX;
		cnt = 0;
		seen.clear();
		dfs(s);
//		cout << s << " " <<  g  << " " << ans << endl;
		if (ans % 2 == 1) cout << "Road\n";
		else cout << "Town\n";
	}
}