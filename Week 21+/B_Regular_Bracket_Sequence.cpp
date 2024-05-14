#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    cin >> s;
    ll r = 0, cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')  r++;
        else {
            if (r > 0) {
                cnt++;
                r--;
            }
        }
    }

    cout << cnt * 2 << '\n';
    
    return 0;
}