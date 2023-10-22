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
    ll n;
    cin>>n;
    ll res = 0;
    vector<ll> v;
    for(ll i = 1; i <= n; i++){
        ll x;
        cin>>x;
        while(x % 2 == 0){
            res++;
            x /= 2;
        }
        ll cur = i;
        ll temp = 0;
        while(cur % 2 == 0){
            temp++;
            cur /= 2;
        }
        v.push_back(temp);
    }
    if(res >= n){
        cout<<0<<endl;
    }
    else {
        ll ans = 0;
        sort(v.begin(),v.end(),greater<int>());
        for(int i = 0; i < v.size(); i++){
            res += v[i];
            ans++;
            if(res >= n){
                cout<<ans<<endl;
                break;
            }
        }
        if(res < n){
            cout<<-1<<endl;
        }
    }
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