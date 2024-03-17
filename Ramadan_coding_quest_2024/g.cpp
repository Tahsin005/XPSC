#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == mx){
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}