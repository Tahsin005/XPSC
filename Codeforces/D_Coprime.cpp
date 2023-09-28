#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> v;
        for(int i = 1; i <= 1000; i++){
            for(int j = 1; j <= 1000; j++){
                if(__gcd(i,j) == 1){
                    v.push_back({i,j});
                }
            }
        }
        int n;
        cin>>n;
        vector<int> val[1005];
        for(int i = 1; i <= n; i++){
            int x;
            cin>>x;
            val[x].push_back(i);
        }
        int ans = -1;
        for(pair<int,int> pr: v){
            int a = pr.first;
            int b = pr.second;
            if(val[a].empty() == false and val[b].empty() == false){
                ans = max(ans, val[a].back() + val[b].back());
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}