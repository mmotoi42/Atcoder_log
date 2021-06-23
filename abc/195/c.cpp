#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	long cnt = 0;
	for (long i = 1000; i < LONG_MAX; i *= 1000) {
		if (n >= i) cnt += n - (i - 1);
		if (i > n) break;
	}
	cout << cnt << endl;
}