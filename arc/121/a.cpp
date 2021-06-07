#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	vector <long> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	long t[100005];
	memset(t, LONG_MAX, sizeof(t));
	for (int i = 1; i < n; i++) {
		t[i] = max(abs(x[i] - x[i - 1]), abs(y[i] - y[i - 1]));
		cout << t[i] << endl;
	}
	sort(t, t + 100000);
	cout << t[1] << endl;
}