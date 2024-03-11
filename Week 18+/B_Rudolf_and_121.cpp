#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool ok = true;
        for (int i = 1; i + 1 < n; i++) {
            a[i] -= (2LL * a[i - 1]);
            a[i + 1] -= a[i - 1];
            a[i - 1] = 0;
            if(a[i] < 0 or a[i - 1] < 0 or a[i + 1] < 0){
                ok = false;
            }
        }
        for (int i = 0; i < n; i++) {
            if(a[i] != 0) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}