#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n, m; cin >> n >> m;
        string a, b; 
        cin >> a >> b;
        int cnt = 0, x = 0;
        while (cnt < n and x < m) {
            if (a[cnt] == b[x]) {
                cnt++;
            }
            x++;
        }
        cout << cnt << '\n';
    }
    
    return 0;
}