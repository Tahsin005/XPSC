#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        if (n < 3) {
            cout << 0 << '\n';
            continue;
        }

        if (n == 3) {
            if (s == "map" or s == "pie") {
                cout << 1 << '\n';
                continue;
            }
        }
        int cnt = 0;
        for (int i = 0; i < n - 2; i++) {
            if ((s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p') or (s[i] == 'p' and s[i + 1] == 'i' and s[i + 2] == 'e')) {
                cnt++;
                i += 2;
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}