#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slice_of_lime = c * d;

    cout << min(total_slice_of_lime, min((total_drink) / nl, (p) / np)) / n << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}