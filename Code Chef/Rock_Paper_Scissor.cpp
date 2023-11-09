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
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int chef = 0, chefina = 0;
    for(int i = 0; i < n; i++){
        char cf = a[i], ci = b[i];
        if(cf == ci){
            continue;
        }
        else if(cf == 'R' and ci == 'S'){
            chef++;
        }
        else if(cf == 'P' and ci == 'R'){
            chef++;
        }
        else if(cf == 'S' and ci == 'P'){
            chef++;
        }
        else{
            chefina++;
        }
    }
    // out2(chef,chefina)
    if(chef > chefina){
        out(0)
    }
    else if(chef == chefina){
        out(1)
    }
    else{
        int x = abs(chef - chefina);
        int ans = (x / 2) + 1;
        out(ans)
    }
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