#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int a, b;
        for (int i = 0; i < n; i++) {
            if (v[i] == 1) a = i;
            else if (v[i] == n) b = i;
        }
        int i = min(a, b), j = max(a, b);
 
        cout << min ({j + 1, n - i, n - j + i + 1}) << '\n';
    }
    
    return 0;
}