#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) & 1) cout << "-1" << '\n';
        else {
            if (a + b > c) {
                cout << c + (a + b - c) / 2 << '\n';
            } else {
                cout << a + b << '\n';
            }
        }
    }
    
    return 0;
}