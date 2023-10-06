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
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n + 1);
    vector<ll> pre(n + 1);
    for(ll i = 1; i <= n; i++){
        cin>>v[i];
    }
    pre[1] = v[1];
    for(ll i = 2; i <= n; i++){
        pre[i] = pre[i - 1] + v[i];
    }
    sort(v.begin(),v.end());
    vector<ll> sortPre(n + 1);
    sortPre[1] = v[1];

    for(ll i = 2; i <= n; i++){
        sortPre[i] = sortPre[i - 1] + v[i];
    }

    ll m;
    cin>>m;
    while(m--){
        ll op,l,r;
        cin>>op>>l>>r;
        if(op == 1){
            cout<<pre[r] - pre[l - 1]<<endl;
        }
        else{
            cout<<sortPre[r] - sortPre[l - 1]<<endl;
        }
    }

}
int main(){
    Tahsin
    ll t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}