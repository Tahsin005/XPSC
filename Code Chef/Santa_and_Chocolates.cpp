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
    int n,k;
    cin>>n>>k;
    vii v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];
    }
    int full = sum / n;
    if(full == 0){
        no
    }
    else{
        int rem = sum % n;

        int oneChildren = full / n;
        vii ans;
        for(int i = 0; i < n; i++){
            if(rem > 0){
                ans.push_back(oneChildren + 1);
                rem--;
            }
            else{
                ans.push_back(oneChildren);
            }
        }

        sort(ans.begin(),ans.end());

        bool flag = true;
        for(int i = 0; i < n - 1; i++){
            if(abs(ans[i] - ans[i + 1]) > k){
                flag = false;
                break;
            }
        }
        if(flag == true) yes
        else no
        // for(auto& val: ans){
        //     cout<<val<<" ";
        // }nl
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