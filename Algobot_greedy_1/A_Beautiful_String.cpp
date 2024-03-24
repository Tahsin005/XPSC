#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s;
        cin >> s;
        int n = s.length();
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                for (char c = 'a'; c <= 'c'; c++) {
                    if (s[i - 1] != c and s[i + 1] != c) {
                        s[i] = c;
                    }
                }
            } else if (s[i] == s[i + 1]) {
                ok = false; break;
            }
        }
        cout << (ok ? s : "-1") << '\n';
    }
    
    return 0;
}