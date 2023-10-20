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
    ll n,q;
    cin>>n>>q;

    ll odd = 0, even = 0, oddsum = 0, evensum = 0;
    for(ll i = 0; i < n; i++){
        ll a;
        cin>>a;
        if(a % 2 == 0){
            even++;
            evensum += a;
        }
        else{
            odd++;
            oddsum += a;
        }
    }
    while(q--){
        ll tp,x;
        cin>>tp>>x;
        if(tp == 0){
            if(x % 2 == 0){
                evensum += (x * even);
            }
            else{
                oddsum += (evensum + (x * even));
                odd += even;
                even = 0;
                evensum = 0;
            }
        }
        else if(tp == 1){
            if(x % 2 == 0){
                oddsum += (x * odd);
            }
            else{
                evensum += (oddsum + (x * odd));
                even += odd;
                odd = 0;
                oddsum = 0;
            }
        }
        cout<<oddsum + evensum<<el;
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