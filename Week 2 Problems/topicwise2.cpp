#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        long long sum = 0;
        int mx = 0;

        map<long long, int> mp;

        for (int i = 0; i < N; i++)
        {
            sum += A[i];

            if (sum == K)
                mx = max(i + 1, mx);

            if (mp.find(sum) == mp.end())
                mp[sum] = i;

            if (mp.find(sum - K) != mp.end())
            {
                mx = max(i - mp[sum - K], mx);
            }
        }

        return mx;
    }
};