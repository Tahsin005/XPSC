#include<bits/stdc++.h>
#define int long long
using namespace std;
int how_many(string s, string p) {
    int i = 0, j = 0, ans = 0;
    while (i < s.size()) {
        if (s[i] == p[j]) {
            i++;
            j++;
            ans++;
            continue;
        }
        i++;
    }
    return s.size() + p.size() - (2 * ans);
}
int32_t main(){
    vector<string> v;
    for (int i = 1; i < 1e18; i *= 2) {
        v.push_back(to_string(i));
    }

    int tt; cin >> tt; while (tt--) {
        int n;
        cin >> n;
        int ans = 1e18;
        string s = to_string(n);
        for (int i = 0; i < v.size(); i++) {
            ans = min(ans, how_many(s, v[i]));
        }
        cout << ans << '\n';
    }
    
    return 0;
}