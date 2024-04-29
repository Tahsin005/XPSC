#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2) {
        cout << 2 * k - 1;
    } else {
        cout << (k - (n + 1) / 2) * 2;
    }
    
    return 0;
}