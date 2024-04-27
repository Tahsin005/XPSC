#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve () {
    int n, k; cin >> n >> k;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for (auto [x, y] : mp) {
        if (y >= k) {
            cout << k - 1 << '\n'; 
            return;
        }
    }
    cout << n << '\n';
}
int main(){
    int tt; cin >> tt; while (tt--) {
        solve();
    }
    
    return 0;
}