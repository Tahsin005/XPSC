#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
        int res = 0;
        int n = s.size();
        vector<int> pref(n, 0), suff(n, 0);

        pref[0] = (s[0] == '0');
        suff[n - 1] = (s[n - 1] == '1');

        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + (s[i] == '0');
        }

        for (int i = n - 2; i > -1; i--) {
            suff[i] = suff[i + 1] + (s[i] == '1');
        }

        for (int i = 0; i < n - 1; i++) {
            res = max(res, pref[i] + suff[i + 1]);
        }

        return res;
    }
};

// https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/