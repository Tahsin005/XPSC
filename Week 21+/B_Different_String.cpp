#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s; cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        if (mp.size() == 1) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        string tmp = s;
        sort(s.begin(), s.end());
        string t = s;
        reverse(t.begin(), t.end());
        if (tmp == s) {
            cout << t << '\n';
        } else {
            cout << s << '\n';
        }
    }
    
    return 0;
}