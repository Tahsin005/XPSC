#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxCoins(vector<int>& v) {
        sort(v.rbegin(), v.rend());
        int n = v.size();
        int j = n - 1;
        int left = n / 3;
        long long int ans = 0;
        for (int i = 1; i < n - left; i += 2) {
            ans += 1LL * v[i];
        }
        cout << ans << endl;
        return ans;
    }
};

// Problem link: https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/