#include <bits/stdc++.h>
using namespace std;

int main()
{
	long a,b,c;
	cin >> a >> b >> c;

	long ans = __gcd(a, __gcd(b, c));
	cout << a / ans - 1 + b / ans - 1 + c / ans - 1 << endl;
}