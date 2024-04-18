#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int tt; cin >> tt; while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int curr = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < curr) {
                flag = false;
                break;
            } else {
                int x = a[i] / 10;
                int y = a[i] % 10;
                if (x >= curr) {
                    if (y >= x) {
                        curr = y;
                    } else {
                        curr = a[i];
                    }
                } else {
                    curr = a[i];
                }
            }
        }

        if (flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}