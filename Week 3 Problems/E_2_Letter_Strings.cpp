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
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<string> v(n);
    map<char,ll> first;
    map<char,ll> second;
    map<string,ll> occ;


    for(int i = 0; i < n; i++){
        cin>>v[i];
        occ[v[i]]++;
        first[v[i][0]]++;
        second[v[i][1]]++;
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        ll x = max((ll)0, first[v[i][0]] - occ[v[i]]);
        cnt += x;

        x = max((ll)0, second[v[i][1]] - occ[v[i]]);
        cnt+= x;

        if(first[v[i][0]] > 0) first[v[i][0]]--;
        if(second[v[i][1]] > 0) second[v[i][1]]--;
        if(occ[v[i]] > 0) occ[v[i]]--;
    }
    cout<<cnt<<endl;
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