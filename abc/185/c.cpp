#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int l;
    cin >> l;
	// 200 から順番を気にせずに11を選ぶ場合の数 
	// l-1C11
    unsigned long ans = 1;
    for(int i = 1; i < 12; i++){
        ans *= l - i;
        ans /= i;
    }
    cout << ans << endl;
}