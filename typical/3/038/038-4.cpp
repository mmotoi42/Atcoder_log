#include <bits/stdc++.h>
using namespace std;
int main()
{
	long a,b;
	cin >> a >> b;
	long c = b / __gcd(a, b);
	if (c > 1000000000000000000 / a) cout << "Large\n";
	else cout << c * a << endl;
}