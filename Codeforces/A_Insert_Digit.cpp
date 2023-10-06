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
    int n,digit;
    cin>>n>>digit;
    string s;
    cin>>s;
    string ans;
    for(int i = 0; i < n; i++){
        if(s[i] - '0' >= digit){
            ans.push_back(s[i]);
        }
        else{
            char ch = static_cast<char>(digit + '0');
            ans.push_back(ch);
            for(int j = i; j < n; j++){
                ans.push_back(s[j]);
            }
            break;
        }
    }
    if(ans.size() == n){
        char c = static_cast<char>(digit + '0');
        ans.push_back(c);
        cout<<ans<<endl;
        ans.clear();
    }
    else{
        cout<<ans<<endl;
        ans.clear();
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