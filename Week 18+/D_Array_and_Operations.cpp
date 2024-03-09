#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t n, k; cin >> n >> k;
        vector<int64_t> v(n);
        for (int64_t i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int64_t cnt = 0;
        for (int64_t i = 0; i < n - k; i++) {
            if (i < n - 2 * k) {
                cnt += v[i];
                continue;
            }
            cnt += (v[i] / v[i + k]);
        }
        cout << cnt << '\n';
    }
    
    return 0;
}