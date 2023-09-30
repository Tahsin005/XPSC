#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    ll n;
    cin>>n;
    ll a[n];
    ll sum = 0;
    ll mx = 0;
    ll min_odd = INT_MAX;
    for(ll i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
        if(a[i] % 2 == 1){
            min_odd = min(min_odd,a[i]);
        }
    }
    if(sum % 2 == 1){
        cout<<sum - min_odd<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    return 0;
}