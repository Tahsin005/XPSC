#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    if (a == b) {
        cout << 0 << endl;
        return;
    }

    if (a > b) swap(a, b);

    int diff = b - a;
    int k = diff / 10;
    int rem = diff - k * 10;
    cout << k + (rem ? 1: 0) << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}