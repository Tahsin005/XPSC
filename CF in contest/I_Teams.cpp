#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());

    int team1 = n / 2 + (n & 1);
    int team2 = n / 2;
    cout << team1 << '\n';
    for (int i = 0; i < n; i += 2) {
        cout << v[i].second + 1 << " ";
    }
    cout << '\n';
    cout << team2 << '\n';
    for (int i = 1; i < n; i += 2) {
        cout << v[i].second + 1 << " ";
    }
    cout << '\n';
    return 0;
}