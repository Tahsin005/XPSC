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
    vll v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    unordered_map<ll, ll> mpp;
    mpp[0] = 1;
    ll sum = 0, cnt = 0;
    for(ll i = 0; i < v.size(); i++){
        sum += v[i];
        ll remove = sum - k;
        cnt += mpp[remove];
        mpp[sum] += 1;
    }
    cout << cnt;
    return 0;    
}