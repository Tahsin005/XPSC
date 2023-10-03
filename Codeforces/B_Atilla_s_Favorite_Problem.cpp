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
        string s;
        cin>>s;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            // cout<<(s[i] - 'a')<<endl
            mx = max(mx, (s[i] - 'a') + 1);
        }
        cout<<mx<<endl;
    }
    return 0;
}