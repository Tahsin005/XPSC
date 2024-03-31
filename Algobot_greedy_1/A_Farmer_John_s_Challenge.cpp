#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    if (n == k) {
        for (int i = 0; i < n; i++) cout << 1 << ' ';
        cout << '\n';
        return;
    }
    if (k == 1) {
        for (int i = 0; i < n; i++) cout << i + 1 << ' ';
        cout << '\n';
        return;
    }
    if (k == 0 and n >= 3) {
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                cout << 1 << ' ';
            } else {
                cout << 2 << ' ';
            }
        }
        cout << '\n';
        return;
    }
    cout << "-1" << '\n';
}
int main(){
    int tt; cin >> tt; while (tt--) {
        solve();
    }
    
    return 0;
}