#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        ll n;
        cin >> n;
        if (n < 6) cout << 15 << '\n';
        else {
            if (n & 1) n++;

            cout << (n / 2) * 5LL << '\n';
        }
    }
    
    return 0;
}