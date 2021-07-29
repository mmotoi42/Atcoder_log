#include <bits/stdc++.h>
using namespace std;
int main()
{
	long a,b,c;
	cin >> a >> b >> c;
	if (a < powl(c,b)) cout << "Yes\n";
	else cout << "No\n";
}