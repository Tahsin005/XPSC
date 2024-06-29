#include <bits/stdc++.h>
using namespace std;

int main () {
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> reorderd;
        for (int i = 1; i <= n; i++) reorderd.push_back(i);

        if (n & 1) {
            for (int i = 0; i < n - 1; i += 2) {
                swap(reorderd[i], reorderd[i + 1]);
            }
            swap(reorderd[n - 1], reorderd[n - 2]);
        } else {
            for (int i = 0; i < n; i += 2) {
                swap(reorderd[i], reorderd[i + 1]);
            }
        }

        for (int x : reorderd) cout << x << " ";
        cout << "\n";
    }
}