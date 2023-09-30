#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    ll n,k,cnt = 0;
    cin>>n>>k;
    while(n--){
        ll ti;
        cin>>ti;
        if(ti % k == 0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}