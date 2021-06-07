#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d,n;
	cin >> d >> n;
	int ans = 0;
	int index = 0;
	for (int i = 1; i <= 10000000; i++) {
		int x = i;
		int cnt = 0;
		while (x % 100 == 0) {
			x /= 100;
			cnt++;
			//cout << i << ":" << cnt << endl;
		}
		if (cnt == d) {
			index++;
			if (index == n) {
				ans = i;
				break;
			}	
		}
	}
	cout << ans << endl;
}