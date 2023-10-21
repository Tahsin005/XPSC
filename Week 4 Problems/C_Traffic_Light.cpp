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
    int n; char c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(c == 'g'){
        cout<<0<<el;
        return;
    }

    s = s + s;
    vii v;
    for(int i = 0; i < 2 * n; i++){
        if(s[i] == 'g') v.pb(i);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == c){
            int x = lower_bound(v.begin(),v.end(),i) - v.begin();
            ans = max(ans, v[x] - i);
        }
    }
    cout<<ans<<el;
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