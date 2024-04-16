#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        ll n, k, x;
        cin >> n >> k >> x;
        ll max_possible_value = k * (k + 1) / 2;
        if(max_possible_value > x or k > n){
            cout << "NO" << '\n';
            continue;
        }
        ll remaining_value_after_kth = (n - k);
        max_possible_value += remaining_value_after_kth * k;
        if (max_possible_value >= x) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}