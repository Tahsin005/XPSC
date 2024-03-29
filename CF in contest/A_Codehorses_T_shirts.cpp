#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v(n);
    map <string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end(), [&](const string &a, const string &b) {
        return a.size() < b.size();
    });
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << endl; 
    // }
    int idx = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (mp[s] > 0) {
            mp[s]--;
            continue;
        }
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}