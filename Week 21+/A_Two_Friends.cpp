#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]] = i + 1;
        }

        bool ok = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (mp[v[i]] == v[j] and mp[v[j]] == v[i]) {
                    ok = true;
                }
            }
        }
        if (ok) cout << 2 << '\n';
        else cout << 3 << '\n';
    }
    
    return 0;
}