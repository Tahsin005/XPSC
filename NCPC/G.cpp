#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minLengthDeletedSubarray(vector<int>& A, vector<int>& B) {
    int n = A.size();
    int m = B.size();

    int result = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (A[i] == B[j]) {
            i++;
            j++;
        } else {
            result++;
            i++;
        }
    }

    // If there are remaining elements in A, they need to be deleted
    while (i < n) {
        result++;
        i++;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; ++tc) {
        int n;
        cin >> n;

        vector<int> A(n);
        vector<int> B(n);

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> B[i];
        }

        int minDeletedSubarrayLength = minLengthDeletedSubarray(A, B);

        cout << "Case " << tc << ": " << minDeletedSubarrayLength << endl;
    }

    return 0;
}
