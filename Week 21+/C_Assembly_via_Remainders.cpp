#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve () {
    int n; cin >> n;
    vector<int> v(n - 1), ans(n, 0);
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i]; sum += v[i];
    }   
    ans[0] = sum + 1;
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] + v[i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";

}
int main(){
    int tt; cin >> tt; while (tt--) solve ();
    
    return 0;
}