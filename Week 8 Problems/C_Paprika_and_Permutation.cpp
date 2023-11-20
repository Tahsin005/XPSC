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
//@ Problem Link: https://codeforces.com/contest/1617/problem/C
void solve(){
    ll n;
    cin >> n;

    unordered_map<ll,ll> mp;
    vector<ll> a;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        mp[x]++;
        if(mp[x] > 1 and x <= n){
            a.pb(x);
        }
        else if(x > n){
            a.pb(x);
        }
    }

    sort(all(a));
    ll ans = a.size();
    reverse(all(a));

    for(int i = 0; i < n; i++){
        if(mp[i + 1] == 0){
            ll x = a.back();
            a.pop_back();
            ll y = i + 1;
            if(x % (x - y) == y){
                continue;
            }
            else{
                ans = -1;
                break;
            }
        }
    }
    cout << ans << el;
}
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