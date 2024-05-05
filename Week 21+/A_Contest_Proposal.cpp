#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve () {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int cnt = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = n - 1, j = n - 1;
    while (i >= 0 and j >= 0) {
        if (a[i] <= b[j]) {
            i--, j--;
        } else {
            i--;
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main(){
    int t; cin >> t; while (t--) solve();
    return 0;
}