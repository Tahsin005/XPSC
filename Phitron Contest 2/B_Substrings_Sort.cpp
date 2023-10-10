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
bool length(string& a,string& b){
    return a.length() < b.length();
}
void solve(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),length);
    bool flag = true;
    for(int i = 0; i < n - 1; i++){
        if(isSubstring(v[i],v[i + 1]) == false){
            flag = false;
            break;
        }
    }
    if(flag == true){
        yes
        for(auto& val: v){
            cout<<val<<endl;
        }
    }
    else{
        no
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