#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc; cin >> tc; while (tc--) {
        string s,t;
        cin >> s >> t;
        if(s == t) {
            cout << "YES" << '\n';
            continue;
        }
        int j = 0, i = 0;
        while (j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            else if(t[j] != t[j - 1]){
                break;
            }
            j++;
        }
        if (i == s.length() and j == t.length()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }  
    return 0;
}