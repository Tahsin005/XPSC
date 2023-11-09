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
ll gcd(ll a,ll b){
    return __gcd(a,b);
}
ll lcm(ll a,ll b){
    return (a / gcd(a,b)) * b;
}
int main(){
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    ll ans = 0; 
    ans += ((n / a) * p);
    ans += ((n / b) * q);

    ll LCM = lcm(a,b);
    ll same = n / LCM;

    ans -= (same * (p + q));
    ans += (same * max(p,q));
    
    cout << ans << el;
    
    return 0;    
}