#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int decoder(int n, vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
    
    unordered_map<int, int> myDict;
    for (int i : arr) {
        myDict[i]++;
    }

    int big_value = 0;
    for (const auto& pair : myDict) {
        big_value = max(big_value, pair.second);
    }

    if (big_value < 2) {
        return -1;
    }

    vector<pair<int, int>> myVec(myDict.begin(), myDict.end());

    vector<int> store;
    int count = 0;

    if (myVec[0].second > 0) {
        count = myVec[0].second;
    }

    int len = myVec.size();
    int i = 0;
    while (i < len - 1) {
        if (count) {
            if (myVec[i + 1].second > 2) {
                store.push_back(myVec[i].first);
                count--;
            }
            else if (myVec[i + 1].second == 2) {
                store.push_back(myVec[i].first);
                count--;
            }
            else {
                count += myVec[i].second;
            }
        }
        else {
            count = myVec[i].second;
        }

        i++;
    }

    int ans = 0;
    for (int i : arr) {
        for (int j : store) {
            if (i % j == 0) {
                ans++;
                break;
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }

        cout << "Case " << i << ": " << decoder(n, arr) << endl;
    }

    return 0;
}
