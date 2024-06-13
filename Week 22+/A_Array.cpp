#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define sz(x) (int)x.size()
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0), a, b, c;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0) neg++;
    }
    int s_a = 1, s_b = 0;
    if (neg % 2 == 0) {
        s_b = neg - 2;
    }
    else {
        s_b = neg - 1;
    }

    for (int x : v) {
        if (x < 0) {
            if (s_a > 0) {
                a.push_back(x);
                s_a--;
            }
            else if (s_b > 0) {
                b.push_back(x);
                s_b--;
            }
            else {
                c.push_back(x);
            }
        }
        else if (x > 0) {
            b.push_back(x);
        }
        else {
            c.push_back(x);
        }
    }

    cout << sz(a) << " ";
    for (int x : a)
        cout << x << " ";
    cout << endl;

    cout << sz(b) << " ";
    for (int x : b)
        cout << x << " ";
    cout << endl;
    
    cout << sz(c) << " ";
    for (int x : c)
        cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}