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
    string s;
    cin>>s;
    map<string,int> mp;
    string temp;
    for(int i = 0; i < n - 1; i++){
        char c1 = s[i];
        char c2 = s[i + 1];
        temp.push_back(c1);
        temp.push_back(c2);
        mp[temp]++;
        temp.clear();
    }
    int mx = INT_MIN;
    string ans;
    for(auto& pr: mp){
        // cout<<pr.first<<" "<<pr.second<<endl;
        if(pr.second > mx){
            mx = pr.second;
            ans = pr.first;
        }
    }
    cout<<ans<<endl;
    mp.clear();
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