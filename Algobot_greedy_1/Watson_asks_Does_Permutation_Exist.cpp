#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] > 1) {
                ans = 0;
                break;
            }
        }
        cout << (ans? "YES": "NO") << endl;
    }
    
    return 0;
}