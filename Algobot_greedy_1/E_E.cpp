#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << abs (x - y) * a + min (x, y) * min (b, 2 * a) << '\n';
    }
    
    return 0;
}