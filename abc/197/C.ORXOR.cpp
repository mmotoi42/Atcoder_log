#include <iostream>
#include <limits.h>
#include <algorithm>

#include <bitset>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	if (n == 1) {
		cout << a[0] << endl;
		return (0);
	}

	int ans = INT_MAX;
	// [o|o|o] <- o is n : | is n - 1
	// so sep max is n - 1
	for (int sep = 0; sep < (1 << (n - 1)); sep++) {
		int xored = 0;
		int ored = a[0];
		for (int i = 1; i < n; i++) {
			if (sep & (1 << (i - 1))) {
				xored ^= ored;
				ored = 0;
			}
			ored |= a[i];
		}
		xored ^= ored;
		ans = min(ans, xored);
	}
	cout << ans << endl;
}