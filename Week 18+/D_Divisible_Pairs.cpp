#include<bits/stdc++.h>
#define ll long long
using namespace std;

void TEST_CASE () {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    
    ll cnt = 0;
    map<pair<int, int>, int> mp;
    for (ll i = 0; i < n; i++) {
        int xx = x - (v[i] % x);
        xx %= x;
        int yy = (v[i] % y);
        cnt += mp[{xx, yy}];
        mp[{v[i] % x, v[i] % y}]++;
    }

    cout << cnt << '\n';


}
int main () {
    int tt; cin >> tt; while (tt--) {
        TEST_CASE();
    }
    
    return 0;
}