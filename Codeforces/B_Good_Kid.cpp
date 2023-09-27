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
        int a[n];
        ll product = 1;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            product *= a[i];
        }
        ll mx = INT_MIN;
        for(int i = 0; i < n; i++){
            ll pro = 1;
            int x = a[i] + 1;
            for(int j = 0; j < n; j++){
                if(i == j){
                    pro *= x;
                }
                else{
                    pro *= a[j];
                }
            }
            mx = max(mx,pro);
        }
        cout<<mx<<endl;
    }
    return 0;
}