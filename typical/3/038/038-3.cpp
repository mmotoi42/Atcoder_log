#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long a,b;
	cin >> a >> b;
	unsigned long c = a / __gcd(a,b);
	if (c > 1000000000000000000 / b) cout << "Large\n";
	else cout << c * b << endl;
}