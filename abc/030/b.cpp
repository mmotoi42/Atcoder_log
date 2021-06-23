#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	double shorter_per_min = 360.0/12/60;
	double longer_per_min = 360.0/60;

	double shorter = (double)shorter_per_min * m + 360/12 * n;
	double longer = (double)longer_per_min * m;
	//cout << setprecision(5) << shorter << ":" << longer << endl;
	double diff = abs(shorter - longer);
	//cout << diff << endl;
	while (diff > 180) diff = abs(360 - diff);
	cout << setprecision(5) << diff << endl;
}