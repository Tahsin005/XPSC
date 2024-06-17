#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int na, nb; cin >> na >> nb;

    int k, m; cin >> k >> m;

    vector<int> a(na) , b(nb);
    for (int i = 0; i < na; i++) cin >> a[i];

    for (int i = 0; i < nb; i++) cin >> b[i];


    if (a[k - 1] < b[nb - m]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}