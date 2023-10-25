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
    ll n;
	cin>>n;
	ll GCD = 0;
	for(ll i = 0; i < n; i++){
		ll x;
		cin>>x;
		GCD = __gcd(GCD, x);
	}
    // cout<<GCD<<el;
	ll cnt = 0;
	for(ll i = 1; i * i <= GCD; i++){
		if(GCD % i == 0){
			cnt++;
			if(i != GCD / i){
				cnt++;
			}
		}
	}
	cout<<cnt<<el;
    return 0;
}