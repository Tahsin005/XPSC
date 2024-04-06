class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        int n = arr.size();

        vector<int> px(n, 0);
        px[0] = arr[0];
        for (int i = 1; i < n; i++) {
            px[i] = (px[i - 1] ^ arr[i]);
        }
        for (auto q : queries) {
            int l = q[0], r = q[1];
            if (l == 0) {
                res.push_back(px[r]);
            } else {
                res.push_back(px[r] ^ px[l - 1]);
            }
        }

        return res;
    }
};

// https://leetcode.com/problems/xor-queries-of-a-subarray/description/