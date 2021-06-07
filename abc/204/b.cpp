#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= 10) continue;
		if (a[i] > 10) {
			sum += a[i] - 10;
			a[i] = 10;
		}
	}
	cout << sum << endl;
}