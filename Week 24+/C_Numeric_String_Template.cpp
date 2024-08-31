#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
const int INF = 1001001001;


void test_case () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;
        if (s.size() != n) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> x(26, -INF);
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (x[s[i] - 'a'] != -INF && x[s[i] - 'a'] != a[i]) {
                ok = false;
                break;
            }
            x[s[i] - 'a'] = a[i];
        }
        sort(all(x));
        for (int i = 0; i < 25; i++) {
            if (x[i] != -INF && x[i] == x[i + 1]) ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }

}

int main () {
    int tt; cin >> tt;

    for (int t = 1; t <= tt; t++) {
        test_case();
    }
    return 0;
}
 