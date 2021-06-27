#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long a,b;
	cin >> a >> b;
	long m = __gcd(a,b);
	unsigned long ans = a * (b/m);
    if (ans > 1000000000000000000) cout << "Large\n";
    else cout << a * (b / m) << endl;
}