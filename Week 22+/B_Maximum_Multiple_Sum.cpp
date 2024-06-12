#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll nxt = 2;
    ll ans = 0, res = 0;
    while (true) {
        ll curr = nxt;
        if (nxt > n) {
            break;
        }
        ll s = 0;
        while (true) {
            if (curr > n) {
                break;
            }
            s += curr;
            curr += nxt;
        }
        if (s > ans) {
            ans = s;
            res = nxt;
        }
        nxt++;
    }
 
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}