#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll x; cin >> x;
    string s1 = to_string(x);
    if (s1[0] > '1') {
        cout << "NO" << endl; 
        return;
    }

    bool ok = true;
    for(int i = 0; i < s1.size() - 1; i++) {
        if (s1[i] == '0') {
            ok = false; 
            break;
        }
    }
    if (s1.back() == '9') ok = false;
    cout << (ok ? "YES" : "NO") << endl;
}
 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}