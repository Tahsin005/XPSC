#include <bits/stdc++.h>
#define ll long long
using namespace std;

const long long INF = 4e18;
const long long N = 2e6 + 5;
vector<int> a;
ll dp[N];
ll calculate(ll w) {
    if (w == 0) return 0;
    if (w < 0) return -INF;
    if (dp[w] != -1) return dp[w];
    ll ans = -INF;
    for (auto i : a) {
        if ((w - i) >= 0) {
            ans = max(ans, calculate(w - i) + 1);
        }
    }
    return dp[w] = ans;
}
int main() {
    ll n;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    cout << calculate(n) << '\n';
    return 0;
}