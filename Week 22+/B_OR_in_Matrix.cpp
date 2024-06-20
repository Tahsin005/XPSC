#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int m, n; cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n)), b(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = 1;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!a[i][j]) {
                for (int k = 0; k < n; k++) {
                    b[i][k] = 0;
                }
                for (int k = 0; k < m; k++) {
                    b[k][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int t = 0;
            for (int k = 0; k < n; k++) {
                t |= b[i][k];
            }
            for (int k = 0; k < m; k++) {
                t |= b[k][j];
            }
            if (t != a[i][j]) {
                cout << "NO" << endl;
                return;
            }
        }

    }

    cout << "YES" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }


}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}