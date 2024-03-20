#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s; cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        int x = s[i] - '0';
        if (i == 0 and x == 9) {
            continue;
        }
        if (x > 9 - x) {
            s[i] = 9 - x + '0';
        }
    }
    cout << s << endl;
    return 0;
}