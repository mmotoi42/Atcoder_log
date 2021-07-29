#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	cin >> n >> a >> b >> c;

	long sum = LONG_MAX;
	for (long i = 0; i < 10000; i++) {
		if (a * i > n) break;
		if (a * i == n) {
			sum = min(sum, i);
			break;
		}
		for (long j = 0; j < 10000 - i; j++) {
			if (a * i + b * j > n) break;
			if (a * i + b * j + c * (n - (a * i + b * j) / c) == n) {
				sum = min(sum, i + j);
				break;
			}
		}
	}

	cout << sum << endl;
}