#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ll tt; cin >> tt; while (tt--) {
        ll n; cin >> n;
        ll ans = 0;
        while (n % 2 == 0) {
            n /= 2;
            ans++;
        }
        while (n % 3 == 0) {
            n /= 3;
            ans += 2;
        }
        while (n % 5 == 0) {
            n /= 5;
            ans += 3;
        }
        if (n == 1) cout << ans << "\n";
        else cout << -1 << "\n";
    }
}