#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,X,Y;
	cin >> n >> m >> X >> Y;
	int x[n],y[m];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> y[i];
	}
	sort(x, x + n);
	sort(y, y + m);
	bool found = false;
	for (int Z = -100; Z <= 100; Z++) {
		bool f = true;
		//cout << X << ":" << Z << ":" << Y << ":" << x[n - 1] << ":" << y[0] << endl;
		if (!(X < Z && Z <= Y)) f = false;
		if (!(x[n - 1] < Z)) f = false;
		if (!(y[0] >= Z)) f = false;
		if (f) {
			found = true;
			//cout << X << ":" << Z << ":" << Y << ":" << x[n - 1] << ":" << y[0] << endl;
		}
	}
	if (found) cout << "No War\n";
	else cout << "War\n";
}