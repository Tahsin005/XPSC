#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x] = i;
    }

    ll m;
    cin >> m;
    ll ans1 = 0, ans2 = 0;
    while (m--) {
        ll x;
        cin >> x;
        ans1 += mp[x] + 1;
        ans2 += (n - mp[x]);
    }
    cout << ans1 << " " << ans2 << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}