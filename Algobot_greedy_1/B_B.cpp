#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<int, int> mp;
int ret (int n, int last) {
    for (int i = last; i <= 200; i++) {
        if (mp.find(i) == mp.end() and i != n) {
            mp[i]++;
            return i;
        }
    }
}
int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        mp.clear();
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<int> ans;
        int last = 1;
        for (int i = 0; i < n; i++) {
            ans.push_back(ret(v[i], last));
            last = ans[i];
        }
        cout << ans[n - 1] << '\n';

    }
    
    return 0;
}