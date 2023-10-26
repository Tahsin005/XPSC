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
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
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
void solve(){
    int n;
    cin>>n;
    vii v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;

        auto lower = lower_bound(v.begin(), v.end(), x);
        int shorter = -1;

        if(lower != v.begin()){
            shorter = *(--lower);
        }


        auto upper = upper_bound(v.begin(), v.end(), x);
        int taller = -1;

        if(upper != v.end()){
            taller = *upper;
        }
        
        if(shorter != -1){
            cout<<shorter<<" ";
        } 
        else{
            cout<<"X ";
        }

        if(taller != -1){
            cout<<taller<<el;
        }
        else{
            cout<<"X"<<el;
        }
    }
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