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
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a + n);
        bool flag = true;
        for(int i = 0; i < n - 1; i++){
            if(a[i] == a[i + 1]){
                flag = false;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}