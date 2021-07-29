#include <bits/stdc++.h>
using namespace std;
int main()
{
	long a,b,c;
	cin >> a >> b >> c;
	if (a / c < powl(c, b - 1)) cout << "Yes\n";
	else cout << "No\n";
}