#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[200009];
int p[200009];
int cc[200009];
int main(){
    int tt; cin >> tt; while (tt--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            cc[i] = 0;
        }
        int ans = n;
        for (int i = 1; i <= n; i++) {
            if (cc[i] != 0) {
                continue;
            }
            ans--;
            cc[i] = i;
            int u = p[i];
            while (u != i) {
                cc[u] = i;
                u = p[u];
            }
        }
        bool ok = false;
        for (int i = 1; i < n; i++) {
            if (cc[i] == cc[i + 1]) {
                ok = true;
            }
        }
        if (ok)
            ans--;
        else
            ans++;
        cout << ans << '\n';
    }
    
    return 0;
}