#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }

        int l = 0, r = n - 1;
        int suml = v[0];
        int sumr = v[n-1];
        int ans = 0;
 
        while (l < r) {
            if (suml == sumr) {
                ans = max(ans, l + n - r + 1);
            }
 
            if (suml <= sumr) {
                l++;
                suml += v[l];
            } else {
                r--;
                sumr += v[r];
            }
        }
        cout << ans << '\n';;
    }
    
    return 0;
}