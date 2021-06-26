#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) cin >> s[i];
	set<string> st;
	for (int i = 0; i < n; i++) {
		if (st.find(s[i]) != st.end()) continue;
		st.emplace(s[i]);
		cout << i + 1 << endl; 
	}
}