#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long t, x, y;
        cin >> x >> y;
        if (x < y)
            swap(x, y);
        cout << x - y << ' ' << ((x - y) ? min(y % (x - y), x - y - y % (x - y)) : 0) << '\n';
    }

    return 0;
}