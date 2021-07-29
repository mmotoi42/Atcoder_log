#include <bits/stdc++.h>
using namespace std;

int main() {
	long long A, B, THRESHOLD = 1000000000000000000LL;
	cin >> A >> B;

	long long C = A / __gcd(A, B);
	if (B <= THRESHOLD / C) cout << C * B << endl;
	else cout << "Large" << endl;
	return 0;
}