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
    string s;
    cin>>s;
    vector<string> v(5);
    for(int i = 0; i < 5; i++) cin>>v[i];

    char c1 = s[0], c2 = s[1];
    string temp;
    bool flag = false;
    for(int i = 0; i < 5; i++){
        temp = v[i];
        if(temp[0] == c1 or temp[1] == c2){
            flag = true;
            break;
        }
    }
    if(flag) yes else no
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