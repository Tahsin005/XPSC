#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }

    sort(v.rbegin(),v.rend());
    vii pos(n);
    for(int i = 0; i < n; i++){
        // cout<<v[i].first<<" "<<v[i].second<<el;
        pos[i] = v[i].second + 1;
    }
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans += (v[i].first * i + 1);
    }
    cout<<ans<<el;
    for(auto& val: pos){
        cout<<val<<" ";
    }
    return 0;    
}