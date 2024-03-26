#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll tt; cin >> tt; while (tt--) {
        ll n; 
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll sum = 0;
        bool ok = true;
        for (ll i = 0; i < n; i++) {
            if (sum < v[i] and v[i] != 1) ok = false;
            else sum += v[i];
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    
    return 0;
}