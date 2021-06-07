#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool success = false;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (4 * i + 7 * j == n) {
				success = true;
				break;
			}
		}
		if (success) break;
	}

	if (success) cout << "Yes\n";
	else cout << "No\n";
}