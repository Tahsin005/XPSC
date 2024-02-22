#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        if (mp.find(s) != mp.end()) cout << "YES" << "\n";
        else {
            mp[s]++;
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}