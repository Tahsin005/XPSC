#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;
        int z = 0, o = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == f[i]) {
            } else if (s[i] == '0') {
                o++;
            } else {
                z++;
            }
        }
        cout << max (z, o) << '\n';
    }
    
    return 0;
}