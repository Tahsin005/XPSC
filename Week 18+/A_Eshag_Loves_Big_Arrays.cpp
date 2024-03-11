#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while(tt--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        int nin = INT_MAX;
        for (int i = 0; i < n; i++) {
            nin = min(nin, a[i]);
        }
        cout << n - mp[nin] << endl;
    }
    
    return 0;
}