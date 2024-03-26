#include<bits/stdc++.h>
#define ll long long
using namespace std;
void TEST_CASE() {
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
}
int main(){
    int tt; tt = 1; while (tt--) {
        TEST_CASE();
    }
    
    return 0;
}