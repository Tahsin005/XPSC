#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a[0] <= b[m - 1]) {
            swap(a[0], b[m - 1]);
        }
        k--;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        if (k & 1) {
            if (b[0] < a[n - 1]) {
                swap(a[n - 1], b[0]);
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i] * 1LL;
        }
        cout << sum << '\n';
    }
    
    return 0;
}