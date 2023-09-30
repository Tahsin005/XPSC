#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a,b,t;
    cin>>a>>b>>t;
    int iteration = 0;
    for(int i = a; i <= t; i += a){
        iteration++;
    }
    cout<<iteration * b<<endl;
    return 0;
}