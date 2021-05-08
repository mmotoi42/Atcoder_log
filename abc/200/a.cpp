#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;

	int p = n % 100;
	if (p != 0) {
		cout << (n / 100) + 1 << endl;
	}
	else
	{
		cout << n / 100 << endl;
	}
}