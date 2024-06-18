#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n, m; cin >> n >> m;

    int ans = min(n, m);
    cout << ans << " ";
    ans = 0;
    ans += (max(n, m) - min(n,m)) / 2;
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}