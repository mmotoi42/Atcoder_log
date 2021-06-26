#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	int t[q],x[q];
	for (int i = 0; i < q; i++) cin >> t[i] >> x[i];

	deque<int> deck;
	for (int i = 0; i < q; i++) {
		if (t[i] != 3)
		{
			if (t[i] == 1) deck.emplace_front(x[i]);
			else if (t[i] == 2) deck.emplace_back(x[i]);
			continue;
		} 
		auto iter = deck.begin();
		int cnt = 1;
		while (cnt < x[i]) {
			iter++;
			cnt++;
		}
		cout << *iter << endl;
	}
}