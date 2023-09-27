#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float ins = 0.2 * (float)n;
        float ans = ceil((float)100 / ins);
        cout<<(int)ans<<endl;
    }
    return 0;
}