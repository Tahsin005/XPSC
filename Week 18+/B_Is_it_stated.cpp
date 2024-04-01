#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        cin.ignore();
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == 'i' and s[i + 1] == 't') {
                cout << "YES" << '\n';
                flag = false; break;
            }
        }
        if (flag) cout << "NO" << '\n';
    }
    
    return 0;
}