#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int cs = 1;
    int tt; cin >> tt; while (tt--) {
        int n, r; cin >> n >> r;
        set<pair<int,int>> st;
        for (int i = 0; i < r; i++) {
            int a, b; cin >> a >> b;
            st.insert(make_pair(a, b));
        }
        cout << "Scenario #" << cs++ << ": ";
        if (st.size() == r) cout << "possible" << "\n";
        else cout << "impossible" << "\n";
    }
    
    return 0;
}