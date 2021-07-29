#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long a,b,c;
	cin >> a >> b >> c;

	long cnt[3];

	cnt[0] = 2 * b - c - a;
	cnt[1] = (c + a) / 2;
	if ((c + a) % 2 == 1) cnt[1] = (c + a + 1) / 2 - b + 1;
	else cnt[1] = (c + a) / 2 - b;
	cnt[2] = 2 * b - a - c;

	unsigned long ans = LONG_MAX;
	for (int i = 0; i < 3; i++) {
		if (cnt[i] < 0) continue;
		ans = min((unsigned long)cnt[i], ans);
	}

	cout << ans << endl;
}