#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t tt; cin >> tt; while (tt--) {
        int64_t n, l, r;
        cin >> n >> l >> r;
        int64_t v[n];
        for (int64_t i = 0; i < n; i++) cin >> v[i];
        sort(v, v + n);

        int64_t cnt = 0;
        for (int64_t i = 0; i < n; i++) {
            cnt += (upper_bound(v + i + 1, v + n, r - v[i]) - lower_bound(v + i + 1, v + n, l - v[i]));
        }
        cout << cnt << '\n';
    }
    
    return 0;
}