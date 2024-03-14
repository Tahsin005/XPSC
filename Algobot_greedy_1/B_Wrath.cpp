#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0;
    int last = n;
    for (int i = n - 1; i >= 0; i--) {
        if (last > i) cnt -=- 1;
        last = min(last, i - v[i]);
    }

    cout << cnt << '\n';
    return 0;
}