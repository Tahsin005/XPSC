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
#define el '\n'
#define vtr vector
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n][n - 1];

    map<ll,ll> mp;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n - 1; j++){
            cin>>a[i][j];
            if(j == (n - 2)){
                mp[a[i][j]]++;
            }
        }
    }
    ll unq = 0;
    for(auto& pair: mp){
        if(pair.second == 1){
            unq = pair.first;
            break;
        }
    }
    ll idx = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n - 1; j++){
            if(j == (n - 2) and a[i][j] == unq){
                idx = i;
                break;
            }
        }
    }
    vtr<ll> ans;
    ll tempsum = 0;
    for(ll j = 0; j < n - 1; j++){
        ans.pb(a[idx][j]);
        tempsum += a[idx][j];
    }
    ll sum = (n * (n + 1)) / 2;
    ll rem = sum - tempsum;
    ans.pb(rem);
    for(auto& val: ans){
        cout<<val<<" ";
    }nl

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