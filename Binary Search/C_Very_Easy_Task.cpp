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
bool good(int t,int n,int x,int y){
    if(t < min(x,y)){
        return false;
    }
    int cnt = 1;
    t -= min(x,y);

    cnt += (t / x) + (t / y);

    return cnt >= n;
}
void solve(){
    int n,x,y;
    cin>>n>>x>>y;

    int l = 0;
    int r = max(x,y) * n;
    int mid;
    while(l + 1 < r){
        mid = l + (r - l) / 2;
        if(good(mid,n,x,y)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    out(r)

}
int main(){
    Tahsin
    ll t;
    t = 1;
    // cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}