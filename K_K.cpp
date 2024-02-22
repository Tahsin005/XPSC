#include <bits/stdc++.h>
using namespace std;
string removeKdigits(string num, int k) {
    if (num.length() <= k) {
        return "0";
    }
    if (k == 0) {
        return num;
    }
    stack<char> st;
    st.push(num[0]);
    
    for (int i = 1; i < num.length(); i++) {
        while (k > 0 and !st.empty() and num[i] > st.top()) {
            st.pop(); 
            k--;
        }
        st.push(num[i]);
        if (st.size() == 1 and num[i] == '0') {
            st.pop();
        }
    }
    while (!st.empty() and k > 0) {
        st.pop();
        k--;
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    
    reverse(ans.begin(), ans.end());
    if(ans.length() == 0) {
        return "0";
    }
    return ans;
}
int main () {
    int tt; cin >> tt; while (tt--) {
        int n, k;
        cin >> n >> k;
        string num = to_string(n);
        cout << removeKdigits(num, k) << "\n";
    }
    return 0;
}
