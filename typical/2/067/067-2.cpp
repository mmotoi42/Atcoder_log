#include <bits/stdc++.h>
using namespace std;

unsigned long eight_to_ten(string s)
{
	unsigned long ans = 0;
	for (int i = 0; s[i]; i++) {
		ans = ans * 8 + int(s[i] - '0');
	}
	//cout << ans << endl;
	return (ans);
}

string ten_to_nine(unsigned long n)
{
	string base = "012345678";
	string s = "";
	
	if (n == 0) return "0";

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
		unsigned long t = eight_to_ten(n);
		n = ten_to_nine(t);
		for (int j = 0; n[j]; j++) {
			if (n[j] == '8') n[j] = '5';
		}
	}
	cout << n << endl;

}