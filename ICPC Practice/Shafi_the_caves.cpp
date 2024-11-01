#include <bits/stdc++.h>
using namespace std;

const int MAX_ID = 1e6;

int maxCavesVisit(const vector<int>& cave_ids) {
    vector<int> frequency(MAX_ID + 1, 0);
    for (int id : cave_ids) {
        frequency[id]++;
    }

    vector<int> reach_count(MAX_ID + 1, 0);

    for (int i = 1; i <= MAX_ID; ++i) {
        if (frequency[i] > 0) {
            for (int j = i; j <= MAX_ID; j += i) {
                reach_count[i] += frequency[j];
            }
        }
    }

    return *max_element(reach_count.begin(), reach_count.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cave_ids(n);
        for (int i = 0; i < n; ++i) {
            cin >> cave_ids[i];
        }
        cout << maxCavesVisit(cave_ids) << endl;
    }
    return 0;
}
