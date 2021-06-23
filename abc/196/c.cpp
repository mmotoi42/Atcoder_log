#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	long i = 1;
	while (true)
	{
		//cout << stoll(to_string(i) + to_string(i)) << endl;
		if (stoll(to_string(i) + to_string(i)) > n)
		{
			cout << i - 1 << endl;
			return (0);
		}
		i++;
	}
}
