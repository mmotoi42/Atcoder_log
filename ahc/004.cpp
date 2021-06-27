#include <bits/stdc++.h>
using namespace std;

set<string> st;

void solve1()
{
	vector<string> print;
	string s;
	int cnt = 0;
	for (auto iter = st.begin(); iter != st.end(); iter++) {
		s += *iter;
		if (cnt == 20) break;
		if (s.length() >= 20) {
			while (s.length() > 20) {
				s.pop_back();
			}
			print.push_back(s);
			cnt++;
			s = "";
		}
	}
	
	int start = 0;
	for (auto iter = print.begin(); iter != print.end(); iter++) {
		start++;
		for (int i = start; i < 20; i++) {
		}
		cout << endl;
	}
}

void solve2()
{
	string print[20];
	int h = 0;
	for (auto iter = st.begin(); iter != st.end(); iter++) {
		print[h % 20] += *iter;
		h++;
	}
	for (int h = 0; h < 20; h++) {
		for (int w = 0; w < 20; w++) {
			cout << print[h][w];
		}
		cout << endl;
	}
}

bool seen[20][20];
string M[20];

int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};

bool comp(const std::string& lh, const std::string& rh) {
     
    return lh.length() < rh.length();
}
 
class Comp {
public:
    bool operator() (const std::string& lh, const std::string& rh) {
 
        return lh.length() < rh.length();
    }
};

int main()
{
	int n,m;
	cin >> n >> m;
	vector<string> s;
	for (int i = 0; i < m; i++) {
		string t;
		cin >> t;
		//s.push_back(t);
		st.emplace(t);
	}

	solve1();
	//solve2();
}