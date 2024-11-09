#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        int N, P;
        cin >> N >> P;

        cout << "Case " << i << ": ";


        if (N == 1 and P == 1) {
            cout << "Evenius" << endl;
            continue;
        }
        if (N == 1 and P == 2) {
            cout << "Oddius" << endl;
            continue;
        }
        if (N % 2 == 0 and N != 2) {
            cout << "Oddius" << endl;
        } else {
            if (P == 1) {
                cout << "Oddius" << endl;
            } else {
                if (N <= 3) {
                    cout << "Oddius" << endl;
                } else {
                    cout << "Evenius" << endl;
                }
            }
        }
    }

    return 0;
}