#include <bits/stdc++.h>
using namespace std;
int main()
{
	long a,b,c,x,y;
	cin >> a >> b >> c >> x >> y;
	long price = LONG_MAX;
	for (long i = 0; i <= max(x, y) * 2; i += 2) {
		long xcnt = max(x - (i / 2), 0l);
		long ycnt = max(y - (i / 2), 0l);
		price = min(xcnt * a + ycnt * b + c * i, price);
	}
	cout << price << endl;
}