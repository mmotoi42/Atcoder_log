#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int ans = b - a;
	if (ans < 0) cout << 0 << endl;
	else cout << ans + 1 << endl;
}