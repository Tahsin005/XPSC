#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, l, a;
    cin >> n >> l >> a;
    vector<int> t(n), len(n);
    for (int i = 0; i < n; i++) cin >> t[i] >> len[i];

    int ans = 0;
    if (n == 0) {
        cout << l / a << '\n';
        return 0;
    }
    ans += t[0] / a;
    for (int i = 0; i < n - 1; i++) {
        int gap = (t[i + 1] - (t[i] + len[i])) / a;
        ans += gap;
    }
    ans += (l - (t[n - 1] + len[n - 1])) / a;
    cout << ans << '\n';
    
    return 0;
}