#include <bits/stdc++.h>
using namespace std;

bool seen[100001];
int	a[100001];
int cnt;
bool found = false;

void	rec(int btn, int next) {
	//cout << btn << ":" << next << endl;
	if (seen[btn] == true) return;
	seen[btn] = true;
	cnt++;
	if (next == 2) {
		found = true;
		return;
	}
	rec(a[btn], a[a[btn]]);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	rec(1, a[1]);

	if (found)
		cout << cnt << endl;
	else
		cout << -1 << endl;
}