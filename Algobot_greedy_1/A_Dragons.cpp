#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    int s, n;       cin >> s >> n;
    vector<pair<int, int>> x(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i].first >> x[i].second;
    }

    sort(x.begin(), x.end());
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (s > x[i].first) {
            s += x[i].second;
        } else {
            ok = false;
            break;
        }
    }

    cout << (ok? "YES" : "NO") << '\n';
    
    return 0;
}