#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    string s;
    cin >> s;

    for (int i = s.size() - 2; i >= 0; i--) {
        if (s[i] == s[i + 1]) s.erase(i, 2);
    }

    cout << s << "\n";
    return 0;
}