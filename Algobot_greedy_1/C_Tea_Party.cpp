#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    pair<int, int> p[200];
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i;
        ans[i] = (p[i].first / 2) + (p[i].first % 2);

        w -= ans[i];
    }
    if (w < 0) {
        cout << -1 << '\n';
        return 0;
    }

    sort(p, p + n);
    reverse(p, p + n);
    for (int i = 0; i < n; i++) {
        while (ans[p[i].second] < p[i].first and w > 0) {
            ans[p[i].second] += 1;
            w -= 1;
        }
    }
    for (auto val : ans) {
        cout << val << " ";
    } cout << '\n';
    
    return 0;
}