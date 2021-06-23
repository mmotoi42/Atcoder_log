#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,s;
	cin >> k >> s;

	long cnt = 0;
	for (int x = 0; x <= k; x++) {
		for (int y = 0; y <= k; y++) {
			 //cout << x << ":" << y << ":" << s << endl;
			 if (x + y > s) break;
			 if (x + y + k < s) continue;
			 cnt++;
		}
	}
	cout << cnt << endl;
}