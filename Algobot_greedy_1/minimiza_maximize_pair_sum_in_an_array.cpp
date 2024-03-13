#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPairSum(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        int nax = INT_MIN;
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            nax = max(nax, v[i] + v[j]);
        }
        cout << nax << endl;
        return nax;
    }

};

// Problem link: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/