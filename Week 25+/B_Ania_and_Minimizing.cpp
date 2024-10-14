#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (s.length() == 1 and k == 1) {
        cout << 0 << endl;
        return 0;
    } else if (s.length() == 1 and k == 0) {
        cout << s << endl;
        return 0;
    }
    if (s[0] != '1' and k) {
        s[0] = '1';
        k--;
    }
    for (int i = 1; i < s.length(); i++) {
        if (k) {
            if (s[i] != '0') {
                s[i] = '0';
                k--;
            }
        }
    }
    cout << s << endl;
    return 0;
}