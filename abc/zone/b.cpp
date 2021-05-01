#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N, D, H;
	cin >> N >> D >> H;
	int d[N], h[N];
	for (int i = 0; i < N; i++) {
		cin >> d[i] >> h[i];
	}
	double t = 0;
	double maxa = 0;
	while (true) 
	{
		maxa = 0;
		for (int i = 0; i < N; i++)
		{
			double a = (double)(h[i] - t) / d[i];
			if (maxa < a)
				maxa = a;
		}
		double ufo = (double)(H - t) / D;
		if (maxa < ufo)
			break;
		t += 0.0001;
	}
	cout << t << endl;
}