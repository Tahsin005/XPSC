#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc; cin >> tc; while (tc--) {
        int n; cin >> n; vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int x, y;
        for (int i = 0; i < n; i++) {
            if (v[i] == 1) {
                x = i; break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == 1) {
                y = i; break;
            }
        }

        int cnt = 0;
        for (int i = x; i <= y; i++) {
            if (v[i] == 0) cnt++;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}