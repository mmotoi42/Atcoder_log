#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int a[101], b[101], c[17], d[17], t[101];
int maxv;

void update_maxv()
{
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		if (t[a[i]] > 0 && t[b[i]] > 0) cnt++;
	}
	maxv = max(maxv, cnt);
}

void rec(int idx)
{
	if (idx == k) {
		update_maxv();
		return ;
	}

	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			t[c[idx]]++; 
			rec(idx + 1);
			t[c[idx]]--;
		}
		else
		{
			t[d[idx]]++;
			rec(idx + 1);
			t[d[idx]]--;
		}
	}
	return ;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> c[i] >> d[i];
	}
	for (int j = 0; j < 2; j++) {
		if (j == 0) {
			t[c[0]]++;
			rec(1);
			t[c[0]]--;
		}
		else
		{
			t[d[0]]++;
			rec(1);
			t[d[0]]--;
		}
	}

	cout << maxv << endl;
}