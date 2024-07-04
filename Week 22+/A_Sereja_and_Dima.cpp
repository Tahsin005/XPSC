#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int r = 0, l = n - 1;
    ll sereja = 0, dima = 0;
    bool toggler = true;
    while (r < l) {
        if (v[r] > v[l]) {
            if (toggler) {
                sereja += v[r] * 1LL;
            } else {
                dima += v[r] * 1LL;
            }
            r++;
        } else if (v[r] < v[l]) {
            if (toggler) {
                sereja += v[l] * 1LL;
            } else {
                dima += v[l] * 1LL;  
            }
            l--;
        }
        toggler = !toggler;
    }
    if (n & 1) {
        sereja += v[r] * 1LL;
    } else {
        dima += v[l] * 1LL;
    }
    cout << sereja << " " << dima << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}