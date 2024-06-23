#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    int x1, x2, x3, nin = INT_MAX;
    cin >> x1 >> x2 >> x3;
    for (int i = 1; i <= 10; i++) {
        int avg = i;
        int ans = abs(avg - x1) + abs(avg - x2) + abs(avg - x3);
        nin = min(ans, nin);
    }
    cout << nin << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}