#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll tt; cin >> tt; while (tt--) {
        ll n; cin >> n;
        if (n <= 9) {
            cout << n << '\n';
        }
        else if (n > 9 and n <= 100) {
            cout << 9 + (n / 11) << '\n';
        }
        else if (n > 100 and n <= 1000) {
            cout << 18 + (n / 111) << '\n';
        }
        else if (n > 1000 and n <= 10000) {
            cout << 27 + (n / 1111) << '\n';
        }
        else if (n > 10000 and n <= 100000) {
            cout << 36 + (n / 11111) << '\n';
        }
        else if (n > 100000 and n <= 1000000) {
            cout << 45 + (n / 111111) << '\n';
        }
        else if (n > 1000000 and n <= 10000000) {
            cout << 54 + (n / 1111111) << '\n';
        }
        else if (n > 10000000 and n <= 100000000) {
            cout << 63 + (n / 11111111) << '\n';
        }
        else {
            cout << 72 + (n / 111111111) << '\n';
        }
    }

    return 0;
}