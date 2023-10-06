//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int longestSubstrDistinctChars(string S)
{
    // your code here
    int n = S.length();
    if(n <= 1){
        return n;
    }

    unordered_set<char> s;
    int mx = 0;
    int i = 0, j = 0;

    while(j < n){
        if(s.find(S[j]) == s.end()){
            s.insert(S[j]);
            j++;
            mx = max(mx, j - i);
        }
        else{
            s.erase(S[i]);
            i++;
        }
    }

    return mx;
}