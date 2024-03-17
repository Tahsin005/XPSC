#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s; cin >> s;

        int x = 0, y = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[i - 1] and y ) {
                x++;
                y = 0;
            } else {
                y = 1;
            }
            
        }
        cout << x << '\n';
    }
    
    return 0;
}