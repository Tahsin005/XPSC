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
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(i and ans.back() > x){
            ans.push_back(1);
        }
        ans.push_back(x);
    }
    cout<<ans.size()<<endl;
    for(auto& val: ans){
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