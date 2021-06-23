#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (i == 0) cnt *= k;
		else cnt *= k - 1;
	}
	
	cout << cnt << endl;
}
