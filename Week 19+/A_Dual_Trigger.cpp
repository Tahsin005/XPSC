#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t n; 
        cin >> n;
        string s; 
        cin >> s;
        int64_t ones = 0;
        for (int64_t i = 0; i < n; i++) {
            ones += (s[i] == '1');
        }
        if (ones & 1 or ones == 2 and s.find("11") != string::npos) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    
    return 0;
}