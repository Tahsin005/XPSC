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
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    map<string,bool> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]] = true;
    }
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 1; j < s[i].length(); j++){
            string x = s[i].substr(0,j);
            string y = s[i].substr(j,s[i].length() - j);
            
            if(mp[x] == true and mp[y] == true){
                flag = true;
            }
        }
        cout<<flag;
    }
    nl
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