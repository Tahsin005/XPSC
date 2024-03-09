#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t m;
        cin >> m;
        vector<int64_t> a(m);
        vector<int64_t> b(m);
        for (int64_t i = 0; i < m; i++) cin >> a[i];
        for (int64_t i = 0; i < m; i++) cin >> b[i];
        int64_t sum1 = 0, sum2 = 0;
        for (int64_t i = 0; i < m; ++i) {
            sum1 += a[i];
        }
        int64_t ans = INT_MAX;
        for (int64_t i = 0; i < m; ++i) {
            sum1 -= a[i];
            ans = min(ans, max(sum1, sum2));
            sum2 += b[i];
        }
        cout << ans << '\n';
    }
    
    return 0;
}