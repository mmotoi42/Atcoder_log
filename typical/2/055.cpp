#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q;
	cin >> n >> p >> q;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) a[i] %= p;
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == q) cnt++;
	}

	//cout << cnt << endl;
	if (cnt == 0) {
		cout << cnt << endl;
		return (0);
	}
	//5Ccnt
	long ans = 1;
	for (int i = 1; i <= 5; i++) {
		ans *= cnt;
		ans /= i;
		cnt--;
		if (cnt == 0) break;
		//cout << ans << endl;
	}
	cout << ans << endl;
}