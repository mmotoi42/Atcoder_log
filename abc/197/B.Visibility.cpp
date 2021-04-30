#include <iostream>
#include <string>
using namespace std;
int main()
{
	int h,w,x,y;
	cin >> h >> w >> x >> y;
	string s[h];
	for (int i = 0; i < h; i++)
		cin >> s[i];
	int cnt = 0;
	int t = x, u = y;
	while (s[x - 1][y - 1] != '#') 
	{
		cnt++;
		y--;
		if (!(x > 0 && y > 0 && x <= h && y <= w)) break;
	}
	y = u;
	while (s[x - 1][y - 1] != '#') 
	{
		cnt++;
		y++;
		if (!(x > 0 && y > 0 && x <= h && y <= w)) break;

	}
	y = u;
	while (s[x - 1][y - 1] != '#') 
	{
		cnt++;
		x--;
		if (!(x > 0 && y > 0 && x <= h && y <= w)) break;

	}
	x = t;
	while (s[x - 1][y - 1] != '#') 
	{
		cnt++;
		x++;
		if (!(x > 0 && y > 0 && x <= h && y <= w)) break;

	}
	x = t;
	cout << cnt - 3 << endl;
}