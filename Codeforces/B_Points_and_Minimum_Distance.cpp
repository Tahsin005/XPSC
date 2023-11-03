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

    int n2 = 2 * n;
    vii v(n2);
    for(int i = 0; i < n2; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    vii temp1(n), temp2;
    for(int i = 0; i < n; i++){
        temp1[i] = v[i];
    }
    for(int i = n; i < n2; i++){
        int x = v[i];
        temp2.push_back(x);
    }
    vector<pii> pr;
    for(int i = 0; i < n; i++){
        pr.push_back({temp1[i],temp2[i]});
    }
    int sum = 0;
    for(int i = 0; i < pr.size() - 1; i++){
        // cout<<pr[i].first<<" "<<pr[i].second<<el;
        int s1 = abs(pr[i].first - pr[i + 1].first);
        int s2 = abs(pr[i].second - pr[i + 1].second);
        sum += (s1 + s2);
    }
    cout<<sum<<el;
    for(auto p: pr){
        cout<<p.first<<" "<<p.second<<el;
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