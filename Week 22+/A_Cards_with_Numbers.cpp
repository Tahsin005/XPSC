#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
using namespace std;
int main(){
    int n;
    cin >> n;
 
    vector<pair<int, int>> v;
    for (int i = 0; i < 2 * n; i++) {
        int x; cin >> x;
        v.push_back(make_pair(x, i + 1));
    }
    sort(all(v));
    for (int i = 0; i < 2 * n; i += 2) {
        if (v[i].ff != v[i + 1].ff) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < 2 * n; i += 2) {
        cout << v[i].ss << ' ' << v[i + 1].ss << endl;
    }
    
    return 0;
}