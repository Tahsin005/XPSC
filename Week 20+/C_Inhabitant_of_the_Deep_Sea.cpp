#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve () {
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    ll total_durability = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        total_durability += v[i];
    }
    if (k >= total_durability) {
        cout << n << '\n';
        return;
    }

    ll no_of_kraken_attack = k / 2;
    ll i = 0, j = n - 1;
    for (i = 0; i < n; i++) {
        if (v[i] <= no_of_kraken_attack) {
            no_of_kraken_attack -= v[i];
            v[i] = 0;
        } else {
            v[i] -= no_of_kraken_attack;
            break;
        }

        if (no_of_kraken_attack <= 0) {
            i++; break;
        }
    }

    no_of_kraken_attack = k / 2;
    for (j; j > -1; j--) {
        if (v[j] <= no_of_kraken_attack) {
            no_of_kraken_attack -= v[j];
            v[j] = 0;
        } else {
            v[j] -= no_of_kraken_attack;
            break;
        }

        if (no_of_kraken_attack <= 0) {
            j--; break;
        }
    }

    if (k & 1) {
        v[i]--;
        i += (v[i] == 0);
    }

    cout << n - (j - i + 1) << '\n';
}
int main(){
    int tt; cin >> tt; while (tt--) solve();
    
    return 0;
}