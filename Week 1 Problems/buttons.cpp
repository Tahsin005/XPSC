#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a,b;
    cin>>a>>b;
    if(a == b){
        cout<<a + b<<endl;
    }
    else{
        int mx = max(a,b);
        int ans = 2 * mx - 1;
        cout<<ans<<endl;
    }
    return 0;
}