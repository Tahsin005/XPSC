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
        int cnt[n + 1];
        memset(cnt,0,sizeof(cnt));
        int ans = -1;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            if(++cnt[x] >= 3){
                ans = x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}