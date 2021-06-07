#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,w;
	cin >> a >> b >> w;
	w *= 1000;
	int sum = 0;
	int minv = 1000001;
	int maxv = 0;

	for (int i = 1; i <= 1000000; i++) {
		if (a * i <= w && w <= b * i) {
			minv = min(minv, i);
			maxv = max(maxv, i);
		}
	}

	//cout << minv << ":" << maxv << endl;

	if (minv == 1000001 || maxv == 0)
		cout << "UNSATISFIABLE\n";
	else
		cout << minv << " " << maxv << endl;
}