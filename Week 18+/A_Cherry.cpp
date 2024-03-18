#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        long long nax = 0;
        for (int i = 0; i < n - 1; i++) {
            nax = max(nax, 1LL * v[i] * v[i + 1]);
        }
        cout << nax << '\n';
    }
    
    return 0;
}   