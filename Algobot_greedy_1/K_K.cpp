#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        ll n = (ll)s.size();
        bool toggled = true;
        vector<ll> first(n), second(n);
        for (ll i = 0; i < n; i++) {
            ll digit = s[i] - '0';
            if (digit % 2 == 0) {
                first[i] = digit / 2;
                second[i] = digit / 2;
            }
            else {
                digit = digit / 2;
                if (toggled) {
                    first[i] = digit;
                    second[i] = digit + 1;
                    toggled = false;
                }
                else {
                    first[i] = digit + 1;
                    second[i] = digit;
                    toggled = true;
                }
            }
        }
        ll zero = 0;
        for (ll i = 0; i < n; i++) {
            if (first[i] != 0) {
                zero++;
                cout << first[i];
            }
            if (first[i] == 0 and zero) {
                cout << first[i];
            }
        }
        if (zero == 0) {
            cout << 0;
        }
        cout << " ";
        zero = 0;
        for (ll i = 0; i < n; i++) {
            if (second[i] != 0) {
                zero++;
                cout << second[i];
            }
            if (second[i] == 0 and zero)
                cout << second[i];
        }
        if (zero == 0) {
            cout << 0;
        }
        cout << '\n';
    }
    return 0;
}