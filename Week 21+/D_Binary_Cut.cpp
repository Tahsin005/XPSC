#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s; cin >> s;
        int cnt = 0;
        int n = s.length();
        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '1' and s[i + 1] == '0') {
                cnt++;
            }
            if (s[i] == '0' and s[i + 1] == '1') {
                cnt += ok; ok = true;
            }
        }

        cout << cnt + 1 << '\n';
    }
    
    return 0;
}