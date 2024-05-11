#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, nin = INT_MAX; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
        nin = min(nin, x);
    }
    if (mp[nin] & 1)  cout << "Lucky" << '\n';
    else cout << "Unlucky" << '\n';
    return 0;
}