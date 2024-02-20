#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxStrength(const vector<int>& A, vector<int>& dp, vector<bool>& visited, int i) {
    if (i < 0 || i >= A.size() || visited[i]) {
        return 0;
    }
    visited[i] = true;
    int sum = A[i];
    sum += maxStrength(A, dp, visited, i - 1); // Check left neighbor
    sum += maxStrength(A, dp, visited, i + 1); // Check right neighbor
    return dp[i] = sum;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        vector<int> dp(N, 0);
        vector<bool> visited(N, false);

        int maxSoldiers = 0;
        for (int i = 0; i < N; ++i) {
            if (!visited[i]) {
                maxStrength(A, dp, visited, i);
            }
            maxSoldiers = max(maxSoldiers, dp[i]);
        }

        cout << "Case " << t << ": " << maxSoldiers << endl;
    }

    return 0;
}
