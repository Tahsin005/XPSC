#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a + n);
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] == k){
                flag = true;
                break;
            }
            else if(a[mid] > k){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}