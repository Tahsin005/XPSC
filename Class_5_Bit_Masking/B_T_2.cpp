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
    int n,b;
    cin>>n>>b;
    vii v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    vii temp;
    for(int i = 0; i < n; i++){
        if((v[i] & b) == b){
            temp.pb(v[i]);
        }
    }
    // for(int val: temp) cout<<val<<" ";
    if(temp.size() == 0){
        no
    }
    else if(temp.size() == 1){
        if(temp[0] == b) yes
        else no
    }
    else{
        int x = temp[0];
        for(int i = 1; i < temp.size(); i++){
            x &= temp[i];
        }
        if(x == b) yes
        else no
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