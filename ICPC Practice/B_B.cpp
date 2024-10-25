#include <bits/stdc++.h>
using namespace std;

string hasFourXorZero(const vector<int>& nums) {
    map<int, bool> pairSums;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xorVal = nums[i] ^ nums[j];
            if (pairSums.find(xorVal) != pairSums.end()) {
                return "Yes";
            }
            pairSums[xorVal] = true;
        }
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << hasFourXorZero(nums) << endl;
    return 0;
}
