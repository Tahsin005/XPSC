#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        long long count = 0;
        long long subarrayLength = 1;
        for (int i = 1; i < N; i++)
        {
            if (A[i] == A[i - 1])
            {
                subarrayLength++;
            }
            else
            {
                count += (subarrayLength * (subarrayLength + 1)) / 2;
                subarrayLength = 1;
            }
        }
        count += (subarrayLength * (subarrayLength + 1)) / 2;
        long long totalSubarrays = static_cast<long long>(N) * (N + 1) / 2;
        long long beautifulArrays = totalSubarrays - count;
        cout << "Case " << t << ": " << beautifulArrays << endl;
    }
    return 0;
}