#include <bits/stdc++.h>
using namespace std;

int n,m;
map<int, set<int>> mp;
int seen[100000];
int cnt = 0;

void bfs()
{
	queue<int> que;
	auto it = mp.begin();
	que.push((*it).first);
	seen[(*it).first]++;

	while (!que.empty())
	{
		int v = que.front();
		que.pop();
		seen[v]++;
		int t = 0;
		for (auto iter = mp[v].begin(); iter != mp[v].end(); iter++) {
			if (*iter < v) t++;
			if (seen[*iter]) continue;
			que.push(*iter);
			seen[*iter]++;
		}
		if (t == 1) cnt++;
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a,b;
		cin >> a >> b;
		mp[a].emplace(b);
		mp[b].emplace(a);
	}

	bfs();

	cout << cnt << endl;

}