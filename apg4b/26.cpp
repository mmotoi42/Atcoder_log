#include <bits/stdc++.h>
using namespace std;

struct Cal
{
    long current_result;
    map<string, 

};

int main()
{
    string type;
    map<string, long> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {
        string s;
        getline(cin, s);
        if (i == 0) continue;
        type = s.substr(0, s.find(' '));
        if (type == "int") 
    }


}