#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        ll n, m; cin >> n >> m;
        ll cnt = 0;
        for (ll i = 1; i <= m; i++) {
            cnt += (n + i) / i / i;
        }
        
        cout << cnt - 1 << "\n";
    }
    
    return 0;
}