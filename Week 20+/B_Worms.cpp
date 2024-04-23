#include<bits/stdc++.h>
#define ll long long
using namespace std;
void TEST_CASE() {
    ll n; cin >> n;
    vector<ll> pref(n);
    cin >> pref[0];
    for (ll i = 1; i < n; i++) {
        ll x; cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    ll q; cin >> q;
    while (q--) {
        ll label; cin >> label;
        ll l = 0, r = n - 1;
        ll ans;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (pref[mid] < label) {
                l = mid + 1;
            } 
            if (pref[mid] == label) {
                ans = mid;
                break;
            }
            if (pref[mid] > label) {
                ans = mid;
                r = mid - 1;
            } 
        }
        cout << ans + 1 << '\n';
    }
}
int main(){
    TEST_CASE();
    
    return 0;
}