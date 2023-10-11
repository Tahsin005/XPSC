// Problem Link: https://www.codechef.com/problems/DIVISIBLEBY8

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10][10] = {
        {8, 6, 4, 2, 0, 6, 4, 2, 0, 6},
        {4, 2, 0, 6, 4, 2, 0, 6, 4, 2},
        {8, 6, 4, 2, 0, 6, 4, 2, 0, 6},
        {4, 2, 0, 6, 4, 2, 0, 6, 4, 2},
        {8, 6, 4, 2, 0, 6, 4, 2, 0, 6},
        {4, 2, 0, 6, 4, 2, 0, 6, 4, 2},
        {8, 6, 4, 2, 0, 6, 4, 2, 0, 6},
        {4, 2, 0, 6, 4, 2, 0, 6, 4, 2},
        {8, 6, 4, 2, 0, 6, 4, 2, 0, 6},
        {4, 2, 0, 6, 4, 2, 0, 6, 4, 2},
    };

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int d1 = 0, d2 = 0, d3 = s[n - 1] - '0';
        if (n > 1)
            d2 = s[n - 2] - '0';
        if (n > 2)
            d1 = s[n - 3] - '0';

        int target = arr[d1][d2];

        if (target == 8 || target == 0)
        {
            if (n == 1)
                cout << 8 << endl;
            else if (d3 == 8 || d3 == 0)
            {
                cout << s << endl;
            }
            else
            {
                cout << s.substr(0, n - 1) << target << endl;
            }
        }
        else
            cout << s.substr(0, n - 1) << target << endl;
    }
    return 0;
}