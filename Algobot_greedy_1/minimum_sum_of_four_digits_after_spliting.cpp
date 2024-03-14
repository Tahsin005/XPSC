#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        string s = to_string(num);
        for (int i = 0; i < s.length(); i++) {
            v.push_back(s[i] - '0');
        }
        sort(v.begin(), v.end());
        int ans = (v[2] + v[3]) + (10 * (v[0] + v[1]));
        return ans;
    }
};

// Problem link : https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/