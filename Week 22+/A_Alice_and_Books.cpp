#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int mx = INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        mx = max(mx, v[i]);
    }
    cout << mx + v.back() << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}