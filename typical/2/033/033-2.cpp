#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin >> h >> w;

	if (h >= 2 && w >= 2) cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
	else cout << h * w << endl;
}