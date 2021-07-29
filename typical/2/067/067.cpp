#include <bits/stdc++.h>
using namespace std;

unsigned long eight_to_ten(string s)
{
	unsigned long ret = 0;
	unsigned long idx = 1;
	while (s != "") {
		ret += (s.back() - '0') * idx;
		s.pop_back();
		idx *= 8;
	}
	return (ret);
}

string ten_to_nine(unsigned long n)
{
	string s;
	string base = "012345678";
	if (n == 0) {
		return ("0");
	}
	while (n != 0)
	{
		s = base[n % 9] + s;
		n /= 9;
	}
	//cout << s << endl;
	return (s);
}

int main()
{
	string n;
	cin >> n;
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		n = ten_to_nine(eight_to_ten(n));
		for (int j = 0; n[j]; j++) {
			if (n[j] == '8') n[j] = '5';
		}
	}

	cout << n << endl;
}