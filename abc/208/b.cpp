#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p;
	cin >> p;
	int coin[10] = {1,1,1,1,1,1,1,1,1,1};
	int cnt[10];
	for (int i = 0; i < 10; i++) cnt[i] = 100;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			coin[i - 1] *= j; 
			if (i == j) break;
		}
	}

	int ans = 0;
	for (int i = 9; i >= 0; i--) {
		if (p < coin[i]) continue;
		int n = p / coin[i];
		p -= n * coin[i];
		ans += n;
	}
	cout << ans << endl;
}