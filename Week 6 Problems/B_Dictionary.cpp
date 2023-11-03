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
map<string,int> mp;

void precompute(){
    int val = 0;
    string s(2,'#');
    for(char c1 = 'a' ; c1 <= 'z'; c1++){
        for(char c2 = 'a'; c2 <= 'z'; c2++){
            if(c1 != c2){
                s[0] = c1;
                s[1] = c2;
                mp[s] = val++;
            }
        }
    }

    for(char ch = 'a'; ch <= 'z'; ch++){
        s[0] = ch, s[1] = ch;
        mp[s] = val++;
    }
}
void solve(){
    string s;
    cin>>s;
    cout<<mp[s] + 1<<el;
}
int main(){
    Tahsin
    ll t;
    precompute();
    // t = 1;
    cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}