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
#include <iostream>
#include <vector>

using namespace std;

string canget(int n,vii& v){
    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        cnt += v[i];
    }
    if(cnt % n != 0){
        return "No";
    }
    
    int target = cnt / n;
    for(int i = 0; i < n; i++){
        if((v[i] - target) % 2 != 0){
            return "No";
        }
    }
    
    return "Yes";
}
void solve(){
    int n;
    cin>>n;
    vii v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    string result = canget(n, v);
    cout<<result<<el;
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