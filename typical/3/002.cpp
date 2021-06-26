#include <bits/stdc++.h>
using namespace std;

set<string> st;
string s;
int t[20];
int n;

void dfs(int idx)
{
	if (idx == n)
	{
		if (t[idx - 1] == 0)
		{
			st.emplace(s);
		}
		return;
	}

	for (int i = 0; i < 2; i++) {
		if (t[idx - 1] == 0) { 
			t[idx] = 1;
			s += "(";
		}
		else if (i == 0) {
			t[idx] = t[idx - 1] + 1;
			s += "(";
		}
		else if (i == 1) {
			t[idx] = t[idx - 1] - 1;
			s += ")";
		}
		dfs(idx + 1);
		t[idx] = 0;
		s.pop_back();
	}
}

int main()
{
	cin >> n;

	if (n % 2 != 0) return (0);
	else if (n == 0) return (0);
	t[0] = 1;
	s += "(";
	dfs(1);
	for (auto it = st.begin(); it != st.end(); it++) {
		cout << *it << endl;
	}
}