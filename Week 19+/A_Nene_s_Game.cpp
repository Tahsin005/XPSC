#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int k, q;
        cin >> k >> q;
        vector<int> v(k);
        for (int i = 0; i < k; i++) cin >> v[i];

        while (q--) {
            int n;
            cin >> n;
            if (n < v[0]) cout << n << " ";
            else cout << v[0] - 1 << " ";
        }
        cout << '\n';
    }
    
    
    return 0;
}