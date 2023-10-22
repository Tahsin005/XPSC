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
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vll v(n);
    vll vi(m);
    for(ll i = 0; i < n; i++){
        cin>>v[i];
    }
    for(ll i = 0; i < m; i++){
        cin>>vi[i];
    }
    sort(v.begin(),v.end());
    sort(vi.begin(),vi.end());

    ll vLast = n - 1, viLast = m - 1;
    ll ans1 = 0;
    while(vLast >= 0 and viLast >= 0){
        ll valV = v[vLast];
        ll valVi = vi[viLast];
        ans1 += min(valV, (k * valVi));
        vLast--;
        viLast--;
    }
    vLast = 0, viLast = 0;

    ll ans2 = 0;
    
    while(vLast < n and viLast < m){
        ll valV = v[vLast];
        ll valVi = vi[viLast];
        ans2 += min(valV, (k * valVi));
        vLast++;
        viLast++;
    }
    cout<<max(ans1,ans2)<<el;

}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}