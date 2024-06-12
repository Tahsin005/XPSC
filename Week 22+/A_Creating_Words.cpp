#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    string a, b; 
    cin >> a >> b;

    swap(a[0], b[0]);
    cout << a << " " << b << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}