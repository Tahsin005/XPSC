#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n, m, k;
        cin >> n >> m >> k;

        int parts_alice_can_paint = (n / m);
        if (n % m != 0) parts_alice_can_paint++;

        if (n - parts_alice_can_paint > k) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    
    return 0;
}