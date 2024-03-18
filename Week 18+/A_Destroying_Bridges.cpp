#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n, k;
        cin >> n >> k;
        if (k == 0 or k == ((n * (n - 1)) / 2)) {
            if (k == 0) cout << n << '\n';
            else cout << 1 << '\n';
            continue;
        }
        if (k >= (n - 1)) {
            cout << 1 << '\n';
        } else {
            cout << n << '\n';
        }
    }
    
    return 0;
}