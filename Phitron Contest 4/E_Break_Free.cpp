#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int evenCnt = 0;
        int oddCnt = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                oddCnt++;
            else
                evenCnt++;
        }

        ll ans = 1;
        while (evenCnt)
        {
            ans = ans * 2;
            ans = ans % 1000000007;
            evenCnt--;
        }
        if (oddCnt)
        {
            cout << ans << "\n";
            continue;
        }
        else
        {
            cout << ans - 1 << "\n";
            continue;
        }
    }
    return 0;
}