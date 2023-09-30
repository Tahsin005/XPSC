//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int a[],
                                            long long int n, long long int k)
{
    long long int i = 0, j = 0;
    queue<long long int> q;
    vector<long long> v;
    while (j < n)
    {
        if (a[j] < 0)
        {
            q.push(a[j]);
        }
        if (j >= k - 1)
        {
            if (q.size())
                v.push_back(q.front());
            else
                v.push_back(0);
            if (a[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }
    return v;
}