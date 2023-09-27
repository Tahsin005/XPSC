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
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            mn = min(mn,a[i]);
        }

        bool check = false;
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == mn and check == false){
                check = true;
                continue;
            }
            else{
                sum += a[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}