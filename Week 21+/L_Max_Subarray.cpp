#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            int max_num = A[i];
            for (int j = i; j < N; ++j) {
                max_num = max(max_num, A[j]);
                cout << max_num << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
