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
int main(){
    ll n;
    cin >> n;
    vii v(n);
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(n & 1){
        ll x = n / 2;

        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ans += (abs(v[i] - v[x]));
        }
        cout<<ans<<el;
    }
    else{
        ll x = n / 2;

        ll ans1 = 0;
        for(ll i = 0; i < n; i++){
            ans1 += (abs(v[i] - v[x]));
        }

        ll ans2 = 0;
        for(ll i = 0; i < n; i++){
            ans2 += (abs(v[i] - v[x + 1]));
        }
        cout<<min(ans1,ans2)<<el;
    }   
    return 0;    
}