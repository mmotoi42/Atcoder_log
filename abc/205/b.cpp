#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int t[n];
	memset(t, 0, sizeof(t));
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		t[a[i] - 1]++;
	}
	bool failure = false;
	for (int i = 0; i < n; i++) {
		if (t[i] != 1) failure = true;
	}
	if (failure) cout << "No\n";
	else cout << "Yes\n";
}