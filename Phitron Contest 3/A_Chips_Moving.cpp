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
    vii v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(v[i] & 1){
            cnt++;
        }
    }
    int ans = min(cnt, n - cnt);
    cout<<ans<<el;
    return 0;    
}