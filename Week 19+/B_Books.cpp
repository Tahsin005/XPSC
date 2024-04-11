#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll sum = 0, cnt = 0, j = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum <= t) {
            cnt -=- 1;
        } else {
            sum -= v[j];
            j++;
        }
    }
    cout << cnt << '\n';
    return 0;
}