#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        if (n & 1) {
            cout << "NO" << '\n';
            continue;
        } 
        n /= 2;
        cout << "YES" << '\n';
        while (n--) {
            cout << "AAB";
        }
        cout << '\n';
    }
    
    return 0;
}