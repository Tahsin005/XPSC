#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &i : a) cin >> i;
    int row = -1, mx = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '#')
                cnt++;
        }
        if (cnt > mx) {
            mx = cnt;
            row = i;
        }
    }
    int col = -1, hashStart = -1, hashEnd = -1;
    for (int i = 0; i < m; i++) {
        if (a[row][i] == '#') {
            hashStart = i;
            break;
        }
    }
    for (int i = m - 1; i >= 0; i--) {
        if (a[row][i] == '#') {
            hashEnd = i;
            break;
        }
    }
    col = (hashStart + hashEnd) / 2;
    cout << row + 1 << " " << col + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}