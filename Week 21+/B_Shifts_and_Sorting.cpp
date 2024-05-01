#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve () {
    string s; cin >> s;

    string temp = s;
    sort(temp.begin(), temp.end());

    if (s == temp) {
        cout << 0 << '\n'; return;
    }

    ll cnt = 0, ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') cnt -=- 1;
        else if (s[i] == '0' and cnt != 0) ans += (cnt + 1);
    }
    cout << ans << '\n';
}
int main(){
    int tt; cin >> tt; while (tt--) solve();
    
    return 0;
}