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
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
const int N = 1e6 + 10;

ll n,k;
ll v[N];

bool good(ll mid){
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        if(v[i] >= mid){
            cnt += (v[i] - mid);
        }
    }
    return cnt >= k;
}
int main(){
    cin>>n>>k;
    for(ll i = 0; i < n; i++){
        cin>>v[i];
    }

    ll l = 0;
    ll r = 1e9;
    ll mid;

    while(r - l > 1){
        mid = (l + r) / 2;
        
        if(good(mid)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }

    if(good(r)){
        cout<<r<<el;
    }
    else{
        cout<<l<<el;
    }
    return 0;    
}