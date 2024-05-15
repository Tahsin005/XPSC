#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int r, g, b; cin >> r >> g >> b;

    int time = 0, ans = 0;
    while ((r + g + b) > 0) {
        if (time % 3 == 0) {
            r = max (r - 2, 0);
        } else if (time % 3 == 1) {
            g = max (g - 2, 0);
        } else {
            b = max (b - 2, 0);
        }

        ans = 30 + time;
        time++;
    }
    cout << ans << '\n';
    
    return 0;
}