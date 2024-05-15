#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int k;
            cin>>k;
            ans = max(ans, k - i);
        }
        cout << ans << '\n';
    }
    
    return 0;
}