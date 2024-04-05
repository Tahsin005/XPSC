#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t n;
        cin >> n;
        vector<int64_t> x(n), y(n);
        for (int64_t i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        } 
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if (n & 1) {
            cout << 1 << '\n'; 
            continue;
        }

        int64_t opt_x = x[n / 2] - x[n / 2 - 1] + 1;
        int64_t opt_y = y[n / 2] - y[n / 2 - 1] + 1;
        cout << opt_x * opt_y << '\n';
    }
    
    return 0;
}