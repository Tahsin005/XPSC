#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc; cin >> tc; while (tc--){
        int n; cin >> n;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }

        int cnt = 1;
        for (int i = 0; i < n; i++) {
            if (cnt < v[i].first) {
                cnt = v[i].first;
            }

            if (cnt <= v[i].second) {
                cout << cnt++ << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}