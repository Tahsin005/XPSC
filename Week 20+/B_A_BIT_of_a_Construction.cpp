#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll tt; cin >> tt; while (tt--) {
        ll n, k;
        cin >> n >> k;
        if (n == 1) {
            cout << k << '\n';
        } else {
            int i = 1;
            while ((1 << i) <= k) {
                i++;
            }
            i--;
            cout << (1 << i) - 1 << " ";
            ll x = k - ((1 << i) - 1);
            n--;
            cout << x << " ";
            n--;
            while (n--) {
                cout << 0 << " ";
            }
            cout << '\n';
        }
    }
    
    return 0;
}