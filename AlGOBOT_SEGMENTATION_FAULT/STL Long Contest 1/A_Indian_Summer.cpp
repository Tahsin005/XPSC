#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    map<string,int> mp;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        mp[s]++;
    }

    cout << mp.size() << "\n";
}