#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;

    string l = "I love";
    string r = "I hate";
    // cout << l << " " << r << endl;
    for (int i = 1; i <= n - 1; i++) {
        if (i & 1) {
            cout << r << " ";
        } else {
            cout << l << " ";
        }
        cout << "that ";
    }
    if (n & 1) cout << r;
    else cout << l;
    cout << " it";
    
    return 0;
}