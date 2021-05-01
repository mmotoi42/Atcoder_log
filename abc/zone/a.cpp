#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int cnt, ret;
  cnt = 0;
  while ((ret = s.find("ZONe")) >= 0)
  {
    cnt++;
    s = s.erase(0, ret + 1);
  }
  cout << cnt << endl;
}