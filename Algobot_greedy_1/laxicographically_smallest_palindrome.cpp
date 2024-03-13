#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.length();

        int i = 0, j = n - 1;
        string ans = "";
        while (i < j) {
            if (s[i] != s[j]) {
                ans += min(s[i], s[j]);
            } else {
                ans += s[i];
            }
            i++, j--;
        }
        cout << ans << endl;
        string temp = ans;
        reverse(temp.begin(), temp.end());

        if (n & 1) ans += s[n / 2];
        
        ans += temp;

        return ans;
    }
};

// Problem link: https://leetcode.com/problems/lexicographically-smallest-palindrome/description/