#include <bits/stdc++.h>
using namespace std;

int bsrch(int x, vector<int> a, int left, int right)
{
    int mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (a[mid] < x)
            left = mid + 1;
        else
            right = mid;
    }
    if (a[left] == x)
        return (left);
    return (-1);
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n), c(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++) cin >> c[i];

	unsigned long t[100005] = {0};
	unsigned long f[100005] = {0};
	unsigned long cnt = 0;
	for (int i = 0; i < n; i++) t[a[i]]++;
	for (int i = 0; i < n; i++) f[b[c[i] - 1]]++;
	for (int i = 0; i < 100005; i++) {
		cnt += t[i] * f[i];
	}
	cout << cnt << endl;
	
}