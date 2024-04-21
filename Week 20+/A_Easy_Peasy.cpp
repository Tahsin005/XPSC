#include<bits/stdc++.h>
using namespace std;
#define int long long

void TEST_CASE(){
    int n, x;
    cin >> n >> x;
    for (int i = 1; i < n; ++i) {
        int t;
        cin >> t;
        x = __gcd(x, t);
    }
    int i = 2;
    while (__gcd(x, i) != 1) {
        ++i;
    }
    cout << (x == 1 ? 0 : i) << '\n';
}

int32_t main() {
    int tt; cin >> tt; while (tt--) {
        TEST_CASE();
    }
    return 0;
}
