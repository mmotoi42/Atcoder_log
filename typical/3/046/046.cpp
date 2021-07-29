#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	map<int, int> mpa,mpb,mpc;
	for (int i = 0; i < n; i++) { 
		cin >> a[i];
		mpa[a[i] % 46]++;
	}
	for (int i = 0; i < n; i++) { 
		cin >> b[i];
		mpb[b[i] % 46]++;
	}
	for (int i = 0; i < n; i++) { 
		cin >> c[i];
		mpc[c[i] % 46]++;
	}

	//for (auto i = mpa.begin(); i != mpa.end(); i++) cout << (*i).first << " " << (*i).second << endl;;

	long cnt = 0;
	for (auto i = mpa.begin(); i != mpa.end(); i++) {
		for (auto j = mpb.begin(); j != mpb.end(); j++) {
			for (auto k = mpc.begin(); k != mpc.end(); k++) {
				if (((*i).first + (*j).first + (*k).first) % 46 == 0)
					cnt += (*i).second * (*j).second * (*k).second;
			}
		}
	}
	cout << cnt << endl;
}