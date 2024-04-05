#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string s;
        cin >> s;
        int decimal_point = 1;
        vector <string> v;
        reverse(s.begin(), s.end());
        // cout << s[0] << " ";
        for (int i = 0; i < s.size(); i++) {
            int value = s[i] - '0';
            int ans = value * pow(10, decimal_point);
            string temp = to_string(ans);
            decimal_point++;    
            if (ans == 0) {
                continue;
            }
            string temp_ans = "";
            for (int idx = 0; idx < temp.size() - 1; idx++) {
                temp_ans += temp[idx];
            }
            v.push_back(temp_ans);
        } 
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}