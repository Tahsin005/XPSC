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
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

int cost(string &a,string &b){
    int diff = 0;
    for(int i = 0; i < a.length(); i++){
        int val1 = a[i] - 'a';
        int val2 = b[i] - 'a';
        diff += abs(val1 - val2);
    }
    return diff;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        string a;
        cin>>a;
        v[i] = a;
    }
    int mn = INT_MAX;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            mn = min(mn,cost(v[i],v[j]));
        }
    }
    cout<<mn<<endl;

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