#include <bits/stdc++.h>
using namespace std;

long seen[87];

long rec(long n)
{
  long l;
  if (seen[n] != 0) return (seen[n]);
  if (n == 0) l = 2;
  else if (n == 1) l = 1;
  else l = rec(n - 1) + rec(n - 2);
  seen[n] = l;
  return (l);
}

int main()
{
  int n;
  cin >> n;
  long l = rec(n);
  cout << l << endl;
}