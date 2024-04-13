#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> v(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v[x]++;
        }
        int ans = 0;
        for (int &val: v) {
            ans += (val > 1);
        }
        cout << ans << "\n";
    }
    
    return 0;
}