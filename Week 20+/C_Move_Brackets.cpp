#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else if (s[i] == ')') {
                if (!st.empty() and st.top() == '(') {
                    st.pop();
                } else {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}