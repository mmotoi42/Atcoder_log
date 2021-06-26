#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n],b[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	sort(a, a + n);
	sort(b, b + n);
	long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += abs(a[i] - b[i]);
	}
	cout << sum << endl;

}