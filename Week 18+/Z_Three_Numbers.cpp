#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int k, s; cin >> k >> s;
    ll cnt = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (s - (i + j) >= 0 and s - (i + j) <= k) {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    
    return 0;
}