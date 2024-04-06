#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) cin >> i;
    
    int a, b; cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += v[i];
    }
    cout << sum << '\n';
    return 0;
}