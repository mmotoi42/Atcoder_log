#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,w;
	cin >> n >> w;
	long s[n],t[n],p[n];
	for (int i = 0; i < n; i++) cin >> s[i] >> t[i] >> p[i];
	long time = 0;
	for (int i = 0; i < n; i++) time = max(time, t[i]); 
	long used[time + 1];
	memset(used, 0, sizeof(used));
	for (int i = 0; i < n; i++) {
		used[s[i]] += p[i];
		used[t[i]] -= p[i];
	}
	for (int i = 1; i <= time; i++) {
		used[i] += used[i - 1];
	}
	// for (int i = 0; i <= time; i++) {
	// 	cout << used[i] << " ";
	// }
	// cout << endl;
	for (int i = 0; i <= time; i++) {
		if (w - used[i] < 0) {
			cout << "No\n";
			return (0);
		}
	}
	cout << "Yes\n";
	return (0);
}