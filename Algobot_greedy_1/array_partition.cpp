#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& v) {
        sort(v.begin(), v.end());
        long long int ans = 0;
        for (int i = 0; i < v.size(); i += 2) {
            ans += (1LL * v[i]);
        }
        return ans;
    }
};

// Problem link : https://leetcode.com/problems/array-partition/description/