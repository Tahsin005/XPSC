#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> a(n), b, c;
        for (int i = 0; i < n; i++) cin >> a[i];

        int x = 0;
        c.push_back(a[0]);

        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) x++;

            if (x) {
                b.push_back(a[i]);
            } else {
                c.push_back(a[i]);
            }
        }

        if (x == 0) {
            cout << "YES" << '\n'; continue;
        }

        if (x > 1) {
            cout << "NO" << '\n'; continue;
        }

        for (auto val: c) {
            b.push_back(val);
        }
        if (is_sorted(b.begin(), b.end())) {
            cout << "YES" << '\n'; continue;
        } else {
            cout << "NO" << '\n'; continue;
        }
    }
    
    return 0;
}