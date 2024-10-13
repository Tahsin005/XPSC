#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);


    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < n; j++) cin >> b[j];

    bool hasOne = false, hasNegOne = false;
    
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (b[i] > a[i]) {
                if (!hasOne) {
                    cout << "NO" << endl;
                    return;
                }
            } else {
                if (!hasNegOne) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        if (a[i] > 0) hasOne = true;
        if (a[i] < 0) hasNegOne = true;
    }

    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}