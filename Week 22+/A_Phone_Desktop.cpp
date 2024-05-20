#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int x, y; cin >> x >> y;
        if (x == 0 and y == 0) {
            cout << 0 << '\n';
            continue;
        }
        int ans = (y / 2) + (y % 2);
        x -= (ans * 7);
        if (y & 1)
            x -= 4;
        if (x > 0) {
            if (x % 15 == 0)
                ans += (x / 15);
            else
                ans += ((x / 15) + 1);
        }
        cout << ans << '\n';
    }
    
    return 0;
}