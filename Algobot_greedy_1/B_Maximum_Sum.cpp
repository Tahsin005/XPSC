#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
int main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t n, k; cin >> n >> k;
        vector<int64_t> a(n);
        for (int64_t i = 0; i < n; i++) {
            cin >> a[i];
        }
        int64_t cur = 0, ans = 0;
        for (int64_t i = 0; i < n; i++) {
            cur += a[i];
            ans = max(ans, cur);
            cur = max(cur, 0LL);
        }
        int64_t final_ans = (accumulate(a.begin(), a.end(), 0LL) % mod + mod) % mod;
        for (int64_t i = 0; i < k; i++) {
            final_ans = (final_ans + ans) % mod;
            ans = (ans * 2) % mod;
        }
        cout << final_ans << '\n';
    }
    
    return 0;
}