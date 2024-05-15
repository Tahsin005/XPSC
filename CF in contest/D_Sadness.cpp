#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    ll ans = 0, i = 1;
    while (n--) {
        ll x; cin >> x;
        ans += (i - 1) * (x - 1) + x;
        i++;
    }
    cout << ans << '\n';
    
    return 0;
}