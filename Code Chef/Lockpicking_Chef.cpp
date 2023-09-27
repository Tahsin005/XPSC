#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,k;
        cin>>s>>k;

        // vector<int> v(n);
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            int steps = 0;
            for(int j = 0; j < m; j++){
                int x = abs((s[j + i] - '0') - (k[j] - '0'));
                // cout<<x<<endl;
                if(x > 5){
                    int y = abs(10 - x);
                    steps += y;
                }
                else{
                    steps += x;
                }
            }
            mn = min(mn,steps);
        }
        cout<<mn<<endl;
    }
    return 0;
}