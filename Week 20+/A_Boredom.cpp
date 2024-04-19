#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 1e5 + 5;
ll dp[MAX];
ll cnt[MAX];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        cnt[a] += a;
    }
    dp[1] = cnt[1];
    for (int i = 2; i <= 100000; i++) {
        dp[i] = max(dp[i - 1], cnt[i] + dp[i - 2]);
    }
    cout << dp[MAX - 5] << '\n';
    return 0;
}
