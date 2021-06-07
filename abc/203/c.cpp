#include <bits/stdc++.h>
using namespace std;

void quicksort(long a[200001], long b[200001], int first, int last)
{
    long x;
    long i;
    long j;
    long tmp;
    x = a[(first+last)/2];
    i = first;
    j = last;
    while (1)
    {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i >= j)
            break;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }
    if (first < i - 1)
        quicksort(a, b, first, i - 1);
    if (last > j + 1)
        quicksort(a, b, j + 1, last);
}

int main()
{
	long n, k;
	cin >> n >> k;
	long a[200001];
	long b[200001];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i = 0; i < n; i++) {
		int t;
		cin >> a[i] >> b[i];
	}
	quicksort(a, b, 0, n - 1);
	//for (int i = 0; i < n; i++) cout << a[i] << ":" << b[i] << endl;
	long t[200001][2];
	memset(t, 0, sizeof(t));
	int index = n - 1;
	//cout << "b" << b[0] << endl;
	if (a[0] > k)
	{
		cout << k << endl;
		return (0);
	}
	for (int i = 0; i < n; i++) {
		t[i][0] = a[i];
		if (i == 0)
			t[i][1] = b[i] + k;
		else
			t[i][1] = t[i - 1][1] + b[i];
		//cout << "t_" << t[i][0] << ":" << t[i][1] << endl;
		if (i > 0 && t[i][0] > t[i - 1][1]) {
			index = i - 1;
			break;
		}
	}
	cout << t[index][1] << endl;
}