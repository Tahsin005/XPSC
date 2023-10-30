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
ll powerOf2(ll n){
    if(n < 0){
        return 0;
    }

    ll result = 1;
    for(ll i = 0; i < n; i++){
        result *= 2;
    }

    return result;
}
void solve(){
    ll n,q;
    cin>>n>>q;

    vtr<ll> v(n),x;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < q; i++){
        ll k;
        cin>>k;
        if(x.empty() or x.back() > k)
            x.pb(k);
    }
    for(int i = 0; i < x.size(); i++){
        ll p = powerOf2(x[i]);
        for(int j = 0; j < n; j++){
            if(v[j] % p == 0){
                ll add = powerOf2(x[i] - 1);
                v[j] += add;
            }
        }
    }

    for(auto& val: v) cout<<val<<" ";
    nl
}
int main(){
    Tahsin
    ll t;
    // t = 1;
    cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}