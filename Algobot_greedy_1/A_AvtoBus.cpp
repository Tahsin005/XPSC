#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int tt; cin >> tt; while (tt--) {
        unsigned long long n;
        cin >> n;

        if (n % 2 == 1 || n < 4) {
            cout << -1 << '\n';
            continue;;
        }
        if (n == 4 || n == 6) {
            cout << 1 << " " << 1 << '\n';
            continue;
        }

        if (n % 4 == 0 and n % 6 == 0) {
            cout << n / 6 << " " << n / 4 << '\n';
        } else {
            cout << "SUEE" << endl;
            unsigned long long r1 = n / 4;
            unsigned long long rem1 = n % 4;
            unsigned long long r2 = n / 6;
            unsigned long long rem2 = n % 6;
            if (rem2 == 4) {
                r2++;
            } else if (rem2 == 2) {
                r2++;
            }
            cout << min(r1, r2) << " " << max(r1, r2) << '\n';
        }
    }

    return 0;
}