#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string revStr(string s) {
        // code here
        reverse(s.begin(),s.end());
        return s;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}