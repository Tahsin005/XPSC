#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int cnt = 1;
    int ans = 1;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] <= v[i + 1]) {
            cnt++;
        } else {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}