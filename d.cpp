#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    map<int,int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    if (mp.find(5) != mp.end() and mp.find(7) != mp.end()) {
        if (mp[5] == 2 and mp[7] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}