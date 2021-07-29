#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,a[3];
	cin >> n >> a[0] >> a[1] >> a[2];
	
	sort(a, a + 3, std::greater<int>());
	long cnt = 9999;
	for (long i = 0; a[0] * i <= n; i++) {
		for (long j = 0; a[0] * i + a[1] * j <= n; j++) {
			if ((n - (a[0] * i + a[1] * j)) % a[2] != 0) continue;
			long k = (n - (a[0] * i + a[1] * j)) / a[2];
			cnt = min(cnt, i + j + k);
		}
	}
	cout << cnt << endl;
}