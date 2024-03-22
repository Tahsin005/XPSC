#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s;
        cin >> s;
        sort (s.begin(), s.end());
        if (s[0] == s[s.length()-1]) cout << -1 << '\n';
        else cout << s.length() - 1 << '\n';
    }
    
    return 0;
}