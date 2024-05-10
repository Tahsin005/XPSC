#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            cout << y << " " << x << '\n';
        } else if (x < y) {
            cout << x << " " << y << '\n';
        } else {
            cout << x << " " << y << '\n';
        }

    }
    
    return 0;
}