// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    bool flag = false;

    for (int x = 1; x < n - 1; x++)
    {
        for (int y = 1; y < n - 1; y++)
        {
            int z = n - x - y;
            if ((x % 3 != 0) && (y % 3 != 0) && (z % 3 != 0) && (x != y && x != z && y != z) && (z > 0))
            {
                ans.push_back(x);
                ans.push_back(y);
                ans.push_back(z);
                flag = true;
                break;
            }
        }
        if (flag == true)
            break;
    }
    if (flag == true)
    {
        cout << "YES" << endl;
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Tahsin int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}