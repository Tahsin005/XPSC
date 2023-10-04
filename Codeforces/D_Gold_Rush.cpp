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
#define nl cout<<endl;
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

map<ll,bool> vis;
bool fun(ll n,ll m){
    vis[n] == true;
    if(n == m) return true;
    if(n % 3 != 0) return false;
    return fun(n / 3,m) or fun(2 * (n / 3),m);
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vis.clear();
    if(fun(n,m)) yes
    else no
}
int main(){
    Tahsin
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}