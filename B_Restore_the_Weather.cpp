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
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a.begin(),a.end());

    vector<int> b(n);

    for(int i = 0; i < n; i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        ans[a[i].second] = b[i];
    }
    for(int val: ans){
        cout<<val<<" ";
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