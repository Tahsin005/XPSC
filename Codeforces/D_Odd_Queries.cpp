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
void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n + 1, 0);
    for(ll i = 1; i <= n; i++){
        cin>>v[i];
    }
    vector<ll> pre(n + 1, 0);
    for(ll i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + v[i];
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll sum = pre[n];

        sum -= pre[r] - pre[l - 1];
        sum += (r - l + 1) * k;

        if(sum % 2 != 0) yes
        else no
    }

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