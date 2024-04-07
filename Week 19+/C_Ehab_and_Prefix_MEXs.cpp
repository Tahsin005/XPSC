#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n), ans(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    set<int> st;
    for (int i = 0; i < 2 * n; i++) st.insert(i);
    for (auto val : v) {
        st.erase(val);
    }
    for (int i = 0; i < n; i++) {
        ans[i] = *st.begin();
        st.erase(*st.begin());
        if (i + 1 < n and v[i] != v[i + 1]) {
            st.insert(v[i]);
        }
    }
    for (auto val : ans) {
        cout << val << " ";
    }
}