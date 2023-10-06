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
    vector<int> v(n);
    vector<int> pre(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    pre[0] = v[0];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + v[i];
    }
    // for(int i = 0; i < n; i++){
    //     cout<<pre[i]<<" ";
    // }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l == 0){
            cout<<pre[r]<<endl;
        }
        else{
            cout<<pre[r] - pre[l - 1]<<endl;
        }
    }
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