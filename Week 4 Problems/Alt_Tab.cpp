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

    vtr<string> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vtr<string> temp;
    map<string,int> mp;
    for(int i = n - 1; i >= 0; i--){
        if(mp.find(v[i]) == mp.end()){
            temp.push_back(v[i]);
            mp[v[i]]++;
        }
    }
    for(string val: temp){
        int x = val.length();
        cout<<val[x - 2]<<val[x - 1];
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