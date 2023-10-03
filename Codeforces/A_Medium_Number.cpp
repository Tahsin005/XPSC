#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(a,max(b,c));
        int mn = min(a,min(b,c));
        int sum = a + b + c;
        cout<<abs(sum - mn - mx)<<endl;
    }
    return 0;
}