#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin >> h >> w;
	if (h == 1) cout << w << endl;
	else if (w == 1) cout << h << endl;
	else if (h % 2 == 0 && w % 2 == 0) cout << h * w / 4 << endl;
	else if (h % 2 == 1 && w % 2 == 1) cout << (h - 1) * (w - 1) / 4 + h / 2 + 1 + w / 2 + 1 - 1 << endl;
	else if (h % 2 == 1 && w % 2 == 0) cout << (h - 1) * w / 4 + w / 2 << endl;
	else if (h % 2 == 0 && w % 2 == 1) cout << h * (w - 1) / 4 + h / 2 << endl;
	//#.#
	//...
	//#.#
	// cout << "------" << endl;
	// if (h == 1 || w == 1) cout << h * w << endl;
	// else cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
}