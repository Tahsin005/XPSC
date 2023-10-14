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
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<ll> dispatch;
    ll change = 0;
    ll total = 0;
    for(int i = 0; i < n; i++){
        ll l = i;
        ll r = n - i - 1;
        if(s[i] == 'L'){
            if(r > l){
                change++;
                total += r;
                dispatch.push_back(r - l);
            }
            else{
                total += l;
            }
        }
        else{
            if(l > r){
                change++;
                total += l;
                dispatch.push_back(l - r);
            }
            else{
                total += r;
            }
        }
    }

    vector<ll> ans(n + 1);
    for(int i = change; i <= n; i++){
        ans[i] = total;
    }

    sort(dispatch.begin(),dispatch.end(),greater<ll>());

    for(int i = change - 1; i >= 1; i--){
        total -= dispatch.back();
        dispatch.pop_back();
        ans[i] = total;
    }

    for(int i = 1; i <= n; i++){
        cout<<ans[i]<<" ";
    }nl
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