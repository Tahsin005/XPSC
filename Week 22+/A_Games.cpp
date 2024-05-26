#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
using namespace std;

pair <ll, ll> p[30];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i].ff;
        cin >> p[i].ss;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i].ff == p[j].ss and i != j) {
                ans++;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}