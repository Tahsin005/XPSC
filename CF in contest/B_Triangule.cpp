#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= 600; i++) {
        sum += i;
        if (sum == n) {
            cout << "YES" << '\n';
            return 0;
        } else if (sum > n) {
            cout << "NO" << '\n';
            return 0;
        }
    }
    
    return 0;
}