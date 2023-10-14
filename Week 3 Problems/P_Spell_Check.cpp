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
    string a = "Timur",b;
    cin>>b;
    if(a.length() == b.length()){
        map<char,int> mp;
        for(int i = 0; i < b.length(); i++){
            mp[b[i]]++;
        }
        bool flag = true;
        for(int i = 0; i < a.length(); i++){
            if(mp[a[i]] > 0){
                mp[a[i]]--;
            }
            else if(mp[a[i]] == 0){
                flag = false;
                break;
            }
        }
        cout<<(flag? "YES": "NO")<<endl;
    }
    else{
        cout<<"NO"<<endl;
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