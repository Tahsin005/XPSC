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
        int mn = INT_MAX;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            mn = min(mn,a[i]);
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            int val = abs(a[i] - mn);
            sum += val;
        }
        cout<<sum<<endl;
    }
    return 0;
}