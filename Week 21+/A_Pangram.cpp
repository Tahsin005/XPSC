#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;

    if (n < 26) cout << "NO" << '\n';
    else {
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            s[i] = toupper(s[i]);
            mp[s[i]]++;
        }
        if (mp.size() == 26) cout << "YES" << '\n';
        else if (mp.size() < 26) cout << "NO" << '\n';
    }
    
    return 0;
}