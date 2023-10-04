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
    int n;
    cin>>n;
    string s = to_string(n);
    int digit = 1;
    vector<string> ans;
    for(int i = s.length() - 1; i >= 0; i--){
        string temp;
        temp.push_back(s[i]);
        int val = s[i] - '0';
        if(val == 0){
            digit++;
            continue;
        }
        if(val >= 1 and val <= 9){
            for(int j = 1; j < digit; j++){
                temp.push_back('0');
            }
            digit++;
        }
        ans.push_back(temp);
        temp.clear();
    }
    cout<<ans.size()<<endl;
    for(string val: ans){
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