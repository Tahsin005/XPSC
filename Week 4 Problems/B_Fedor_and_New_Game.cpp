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
int me, n;
int compare(int x){
    int a = me ^ x;
    // int cnt = 0;
    // for(int k = 31; k >= 0; --k){
    //     if((a & (1<<k)) != 0){
    //         cnt++;
    //     }
    // }
    return __builtin_popcount(a);
}
void solve(){
    int m, k;
    cin>>n>>m>>k;
    m++;
    vii v(m);
    for(int i = 0; i < m; i++){
        cin>>v[i];
    }

    int cnt = 0;
    me = v[m - 1];

    for(int i = 0; i < m - 1; i++){
        int d = compare(v[i]);
        if (d <= k) cnt++;
    }
    cout<<cnt<<el;
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