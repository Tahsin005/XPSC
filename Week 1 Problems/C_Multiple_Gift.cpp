#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    ll x,y;
    cin>>x>>y;
    ll iteration = 0;
    while(x <= y){
        iteration++;
        x += x;
    }
    cout<<iteration<<endl;
    return 0;
}