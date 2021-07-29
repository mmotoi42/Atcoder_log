#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long a,b,c;
	cin >> a >> b >> c;

	long g = __gcd(a, __gcd(b, c));
	cout << a / g - 1 + b / g - 1 + c / g - 1 << endl;
}