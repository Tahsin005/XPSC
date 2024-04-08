#include <bits/stdc++.h>
using namespace std;
int main() {
  int tt; cin >> tt; while (tt--) {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int64_t> a(n * n);
    for (int i = 0; i < n * n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int64_t> b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b.push_back(a[0] + int64_t(i) * c + int64_t(j) * d);
        }
    }
    sort(b.begin(), b.end());
    cout << (a == b ? "YES" : "NO") << '\n';
  }
  return 0;
}
