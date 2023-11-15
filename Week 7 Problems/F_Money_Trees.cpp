// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO"<< '\n';
#define no cout << "No"<< '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
//@ Problem Link: https://codeforces.com/contest/1873/problem/F
void solve(){
    int n;
    cin >> n;
    int s;
    cin >> s;
    vii a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int i = 0, j = 0, sum = 0, ans = 0;

    while(j < n){
        sum += a[j];
        while(i <= j and sum > s){
            sum -= a[i];
            i++;
        }
        if(j > 0){
            if(i < j and (b[j - 1] % b[j]) != 0){
                i = j;
                sum = a[j];
            }
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    cout << ans << el;
}
//
// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> a(n), h(n);
//     for (ll i = 0;i < n;i++)
//         cin >> a[i];
//     for (ll i = 0;i < n;i++)
//         cin >> h[i];
 
//     ll l = 0, r = 0, sum = 0, ans = 0;
//     while (r < n)
//     {
//         sum += a[r];
//         if (((r + 1) < n) && (sum <= k) && ((h[r] % h[r + 1]) == 0))
//         {
//             ans = max(ans, (r - l) + 1);
//             r++;
//         }
//         else
//         {
//             if (((r + 1) < n) && ((h[r] % h[r + 1]) != 0))
//             {
//                 if (sum <= k)
//                 {
//                     ans = max(ans, (r - l) + 1);
//                 }
//                 l = r + 1;
//                 r = l;
//                 sum = 0;
//             }
//             else
//             {
//                 if (sum <= k)
//                 {
//                     ans = max(ans, (r - l) + 1);
//                 }
//                 sum -= a[l];
//                 l++;
//                 r++;
//             }
//         }
//     }
//     cout << ans << '\n';
// }
e4{
    Tahsin
    ll t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;    
}