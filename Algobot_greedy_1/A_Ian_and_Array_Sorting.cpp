#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t n; cin >> n;
        vector <int64_t> v(n);
        for (int64_t i = 0; i < n; i++) cin >> v[i];

        int64_t sum = 0;
        for (int64_t i = 1; i < n; i++) {
            sum += v[i] - v[i - 1];
            i++;
        }

        if ((n & 1) or sum >= 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}