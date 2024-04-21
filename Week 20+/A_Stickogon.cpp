#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        for (auto [x, y] : mp) {
            // cout << x << " " << y << " ";
            while (y >= 3) {
                cnt++;
                y -= 3;
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}