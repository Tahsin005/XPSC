//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int i = 0, j = 0;
        int fr[26] = {0};
        int unq = 0;
        int mx = -1;
        while (j < s.length()){
            fr[s[j] - 'a']++;
            if (fr[s[j] - 'a'] == 1)
            {
                unq++;
            }
    
            while (unq > k)
            {
                fr[s[i] - 'a']--;
    
                if (fr[s[i] - 'a'] == 0)
                {
                    unq--;
                }
                i++;
            }
    
            if (unq == k)
            {
                // cout << j - i + 1 << endl;
                mx = max(mx, j - i + 1);
            }
    
            j++;
        }
        return mx;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends