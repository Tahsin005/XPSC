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
    vector<int> v;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x == 0) continue;
        else v.push_back(x);

        sum += abs(x);
    }
    bool check = false;
    int op = 0;

    for(auto& val: v){
        // cout<<val<<" ";
        if(val < 0 and check == false){
            op++;
            check = true;
        }
        else if(val > 0){
            check = false;
        }
    }
    cout<<sum<<" "<<op<<endl;
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