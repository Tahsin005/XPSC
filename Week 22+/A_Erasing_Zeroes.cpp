#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s;
        cin >> s;
        int f = 0, l = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                f = i;
                break;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                l = i;
                break;
            }
        }
        int cnt = 0;
        if (f == l) {
            cout << 0 << '\n';
            continue;
        }
        for (int i = f; i <= l; i++) {
            cnt += (s[i] == '0');
        }
        cout<< cnt << '\n';
    }
    
    return 0;
}