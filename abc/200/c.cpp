#include <bits/stdc++.h>
using namespace std;
int main() {
	long n;
	cin >> n;
	vector<long> a(n);
	for (long i = 0; i < n; i++) {
		cin >> a[i];
	}

	long cnt = 0;
	long g[201] = {0};
	for (long i = 0; i < n; i++) {
		cnt += g[a[i] % 200];
		g[a[i] % 200]++;
	}
	cout << cnt << endl;
}