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
bool isSubstring(string& a,string& b){
    return b.find(a) != string::npos;
}
void solve(){
    int xl,sl;
    cin>>xl>>sl;
    string x,s;
    cin>>x>>s;
    int cnt = 0;
    bool flag = false;
    while(true){
        bool check = isSubstring(s,x);
        if(check == true){
            flag = true;
            break;
        }
        if(x.length() >= 100){
            flag = false;
            break;
        }
        cnt++;
        x = x + x;
    }
    if(flag == true) cout<<cnt<<endl;
    else if(flag == false) cout<<"-1"<<endl;

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