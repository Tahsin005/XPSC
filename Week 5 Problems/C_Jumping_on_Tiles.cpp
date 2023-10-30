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
string s;
int n;
void solve(){
    cin>>s;

    n = s.length();

    char mn = min(s[0],s[n - 1]);
    char mx = max(s[0],s[n - 1]);

    vector<pair<char,int>> v;

    for(int i = 0; i < n; i++){
        if(s[i] >= mn and s[i] <= mx){
            v.pb({s[i],i});
        }
    }

    sort(v.begin(),v.end(),[&](pair<char,int> a,pair<char,int> b){
        return a.second < b.second;
    });



    if(v.size()>2){
        sort(v.begin() + 1,v.begin() + v.size() - 1,[&](pair<char,int> a,pair<char,int> b){
            if(s[0] > s[n - 1]){
                return a.first > b.first;
            }
            return a.first < b.first;
        });
    }

    vector<int> seq;
    ll moves=0;

    seq.push_back(1);

    for(int i = 1; i < v.size(); i++){
        moves += abs(v[i - 1].first - v[i].first);
        seq.push_back(v[i].second + 1);
    }


    cout<<moves<<" "<<seq.size()<<el;

    for(auto i:seq){
        cout<<i<<" ";
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