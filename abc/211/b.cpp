#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<string> s;
	for (int i = 0; i < 4; i++) {
		string t;
		cin >> t;
		s.emplace(t);
	}
	if (s.find("H") == s.end())  { 
		cout << "No\n";
		return (0);
	}
	if (s.find("HR") == s.end()) { 
		cout << "No\n";
		return (0);
	}
	if (s.find("2B") == s.end()) { 
		cout << "No\n";
		return (0);
	}
	if (s.find("3B") == s.end()) { 
		cout << "No\n";
		return (0);
	}
	cout << "Yes\n";
}