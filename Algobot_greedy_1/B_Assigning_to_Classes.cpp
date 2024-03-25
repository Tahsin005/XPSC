#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n * 2);
        for (int i = 0; i < n * 2; i++) {
            cin >> v[i];
        }
        sort (v.begin(), v.end());
        cout << abs (v[n] - v[n - 1]) << '\n';
    }
    
    return 0;
}