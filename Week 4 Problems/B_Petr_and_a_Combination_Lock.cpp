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
    int n;
    cin>>n;
    vii v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    bool flag = false;
    for(int i = 0; i < (1<<n); i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            int mask = 1<<j;
            if((i & mask) == 0){
                sum -= v[j];
            }
            else{
                sum += v[j];
            }
        }
        if(sum % 360 == 0){
            flag = true;
            break;
        }
    }
    if(flag) yes
    else no
}
int main(){
    Tahsin
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}