#include <bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	cin >> n;

	n *= 1.08;
	n = (int)n;
	if (n < 206) cout << "Yay!\n";
	else if (n == 206) cout << "so-so\n";
	else cout << ":(\n";
}