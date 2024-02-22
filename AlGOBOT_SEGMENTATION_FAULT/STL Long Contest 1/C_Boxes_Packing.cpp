#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        cnt = max(cnt, mp[v[i]]);
    }
    cout << cnt << "\n";
    
    return 0;
}