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
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool cmp(pair<char,int>& a, pair<char,int>& b){
    return a.first > b.first;
}
void solve(){
    string s;
    cin>>s;
    int p; cin>>p;
    int n = s.length();

    vector<pair<char,int>> v;

    int cost = 0;

    for(int i = 0; i < n; i++){
        v.push_back({s[i],i});
        cost += (s[i] - 96);
    }

    vii index(n + 1, 0);

    sort(v.begin(),v.end(),cmp);

    for(auto val: v){
        if(cost <= p) break;
        cost -= (val.first - 96);
        index[val.second] = -1;
    }
    for(int i = 0; i < n; i++){
        if(index[i] != -1){
            cout<<s[i];
        }
    }
    nl
}
int main(){
    Tahsin
    ll t;
    // t = 1;
    cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}