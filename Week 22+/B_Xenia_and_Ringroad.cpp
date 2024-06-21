#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n, m; cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++) cin >> v[i];

    ll time = 0;
    int currentHouse = 1;
    for (int i = 0; i < m; i++) {
        if (v[i] >= currentHouse) {
            time += v[i] - currentHouse;
            currentHouse = v[i];
        } else {
            time += n - currentHouse + v[i];
            currentHouse = v[i];
        }
    }
    cout << time << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}