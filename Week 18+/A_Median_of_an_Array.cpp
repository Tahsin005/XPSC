#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int idx = (n - 1) / 2;
        int cnt = 0;
        while (idx < n - 1 and v[idx] == v[idx + 1]) {
            idx++;
            cnt++;
        }
        cout << cnt + 1 << '\n';
    }
    
    return 0;
}