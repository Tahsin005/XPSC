#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s, t; cin >> s >> t;
    int n = s.length();

    string ans = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            ans += '0';
        } else {
            ans += '1';
        }
    }
    cout << ans << '\n';
    
    return 0;
}