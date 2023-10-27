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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<'\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
ll digitSum(ll n){
    ll ans = 0;
    while(n){
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}
ll howMuch(ll n, ll s){
    ll l = 1;
    ll r = n;
    ll mid = 0;
    ll ans = 0;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(mid - digitSum(mid) >= s){
            ans = max(ans, n - mid + 1);
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
void solve(){
    ll n,s;
    cin>>n>>s;
    ll ans = howMuch(n,s);
    out((ll)ans)
}
int main(){
    Tahsin
    ll t;
    t = 1;
    // cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}