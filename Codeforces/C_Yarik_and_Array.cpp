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
//@ Problem Link: 
ll subarray(vll& arr,int l,int r){
    ll mx = -1e18 + 5;
    ll mxending = 0;
    for(int i = l; i <= r; i++){
        mxending = mxending + arr[i];
        if(mx < mxending){
            mx = mxending;
        }
        if(mxending < 0){
            mxending = 0;
        }
    }
    return mx;
}
void solve(){
    int n;
    cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int prev = 0;
    ll ans = -1e18 + 5;
    for(int i = 1; i < n; i++){
        if((abs(v[i]) % 2) == (abs(v[i - 1]) % 2)){
            ans = max(ans, subarray(v,prev,i - 1));
            prev = i;
        }
    }

    ans = max(ans, subarray(v,prev,n - 1));
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