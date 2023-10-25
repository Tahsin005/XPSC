#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.length();
        vector<string> v;
        string temp;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '.')
            {
                temp.push_back(s[i]);
            }
            else
            {
                v.push_back(temp);
                temp.clear();
            }
        }
        v.push_back(temp);

        reverse(v.begin(), v.end());

        string ans = "";
        for (int i = 0; i < v.size(); i++)
        {
            if (i != v.size() - 1)
            {
                ans += v[i];
                ans += '.';
            }
            else
            {
                ans += v[i];
            }
        }
        return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}