#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin >> s >> t;
	string u = s + s;
	if (u.find(t) != string::npos)
		cout << "Yes\n";
	else
		cout << "No\n";
}