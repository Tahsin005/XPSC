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
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int k;
            cin>>k;
            ans = max(ans, k - i);
        }
        cout<<ans<<endl;
    }
    return 0;
}