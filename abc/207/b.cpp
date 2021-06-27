#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long a,b,c,d;
	cin >> a >> b >> c >>d;

	unsigned long blue = a;
	unsigned long red = 0;
	unsigned long cnt = 0;
	while (true)
	{
		if (red * d >= blue) {
			cout << cnt << endl;
			return (0);
		}
		blue += b;
		red += c;
		cnt++;
		if (cnt == 1000000000) {
			cout << -1 << endl;
			return (0);
		}
	}
	cout << -1 << endl;
}