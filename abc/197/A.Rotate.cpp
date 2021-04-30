#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string t;
	t = s[0];
	s.erase(0,1);
	s += t;
	cout << s << endl;
}