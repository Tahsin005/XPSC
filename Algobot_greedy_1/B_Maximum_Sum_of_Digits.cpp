#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    while (n > 9) {
        n -= 9;
        ans += 9 + n % 10;
        n /= 10;
    }
    cout << ans + n << '\n';
    return 0;
}