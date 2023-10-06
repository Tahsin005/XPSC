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
    string n;
    cin>>n;
    ll cnt = 0;
    
    while(n.length() > 1){
        ll sum = 0;
        for(char digit : n){
            ll val = digit - '0';
            sum += val;
        }
        n = to_string(sum);
        cnt++;
    }
    cout<<cnt<<endl;
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