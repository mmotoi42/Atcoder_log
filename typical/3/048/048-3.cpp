#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	vector<int> ab;
	for (int i = 0; i < n; i++) {
		int all,part;
		cin >> all >> part;
		ab.push_back(part);
		ab.push_back(all - part);
	}
	sort(ab.begin(), ab.end(), std::greater<int>());
	
	long sum = 0;
	for (int i = 0; i < k; i++) {
		sum += ab[i];
	}

	cout << sum << endl;

}