#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin >> n >> m;
  int a[m],b[m];
  vector <vector<int>> c(n);
  for (int i = 0; i < m; i++) {
  	cin >> a[i] >> b[i];
    c[a[i] - 1].push_back(b[i]);
	c[b[i] - 1].push_back(a[i]);
  }
  for (int i = 0; i < n; i++) {
	//cout << i << ":";
	//   for (auto iter = c[i].begin(); iter < c[i].end(); iter++) {
	// 	  cout << *iter << ":";
	//   }
	cout << c[i].size() << endl;
	//cout << endl;
  }
  
}