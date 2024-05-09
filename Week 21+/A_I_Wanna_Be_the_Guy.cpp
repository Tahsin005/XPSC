#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    set<int> st;
    int x; cin >> x;
    for (int i = 0; i < x; i++) {
        int lil_x; cin >> lil_x;
        st.insert(lil_x);
    }
    int y; cin >> y;
    for (int i = 0; i < y; i++) {
        int lil_y; cin >> lil_y;
        st.insert(lil_y);
    }
    if (st.size() == n) cout << "I become the guy." << '\n';
    else cout << "Oh, my keyboard!" << '\n';
    
    return 0;
}