#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        bool ok = false;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 2; j < n; j++) {
                if (s[i] != s[i + 1] and s[i] == s[j]) ok = true;
            }
        }
        if (ok) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
    
    return 0;
}