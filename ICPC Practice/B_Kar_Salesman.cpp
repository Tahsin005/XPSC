#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, x;
    cin >> n >> x;
    long long a, ma = 0, sum = 0;
    for (int i = 0; i < n; i++) cin >> a, ma = max(ma, a), sum += a;
    cout << max(ma, (sum + x - 1) / x) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}