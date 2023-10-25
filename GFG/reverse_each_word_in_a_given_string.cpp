//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
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
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
                temp.clear();
            }
        }
        reverse(temp.begin(),temp.end());
        v.push_back(temp);

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

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends