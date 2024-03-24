#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int cnt = 0;
    for (ll i = 1; i <= k; i++) {
        if (mp[i] & 1) {
            cnt++;
        }
    }
    cnt /= 2;
    cout << n - cnt << '\n';
    return 0;
}