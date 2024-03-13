#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int64_t n; cin >> n;
    vector<int64_t> v(n);
    for (int64_t i = 0; i < n; i++) cin >> v[i];
    int64_t cmax = v[0];
    int64_t cnt = 0;
    for (int64_t i = 1; i < n; i++) {
        if (v[i] < cmax) {
            cnt += (abs(v[i] - cmax));
        } else if (v[i] > cmax) {
            cmax = max(cmax, v[i]);
        }
    }

    cout << cnt << '\n';
    
    return 0;
}

// Problem link: https://cses.fi/problemset/task/1094/