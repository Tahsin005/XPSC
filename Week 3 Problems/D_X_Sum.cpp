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
int a[222][222];
ll sum(int i,int j,int n,int m){
    ll res = 0;

    int idx = 0;
    while(i - idx > -1 and j - idx > -1){
        res += a[i - idx][j - idx];
        idx++;
    }

    idx = 0;
    while(i - idx > -1 and j + idx < m){
        res += a[i - idx][j + idx];
        idx++;
    }

    idx = 0;
    while(i + idx < n and j + idx < m){
        res += a[i + idx][j + idx];
        idx++;
    }
    idx = 0;
    while(i + idx < n and j - idx > - 1){
        res += a[i + idx][j - idx];
        idx++;
    }

    return res - 3 * (a[i][j]);
}
void solve(){
    int n,m;
    cin>>n>>m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans = max(ans, sum(i,j,n,m));
        }
    }
    cout<<ans<<endl;

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