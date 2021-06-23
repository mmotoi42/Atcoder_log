#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	cin >> a >> b;
	if (a == 0)
	{
		cout << 0 << endl;
		return (0);
	}
	double t = (double)a * b;
	t = t / 100;
	cout << setprecision(8) << t << endl;
}