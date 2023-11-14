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
    ll n,k;
    cin >> n >> k;
    vll v;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0 and i * i != n){
            v.pb(i);
            v.pb(n / i);
        }
        else if(n % i == 0){
            v.pb(i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size() < k){
        cout << -1 << el;
    }
    else{
        cout << v[k - 1] << el;
    }
    return 0;    
}