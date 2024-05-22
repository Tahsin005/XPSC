#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        set<char> st;
        for (char c: s) {
            st.insert(c);
        }

        vector<char> v;
        for (char c: st) {
            v.push_back(c);
        }

        n = v.size();
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[v[i]] = v[n - 1 - i];
        }
        string ans = "";
        for (char c: s) {
            ans += mp[c];
        }
        cout << ans << "\n";
    }
    
    return 0;
}