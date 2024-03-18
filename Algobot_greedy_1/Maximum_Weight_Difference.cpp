#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n, k; cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int sumk = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            if (i < k) sumk += v[i];
            else sum += v[i];
        }
        int x = abs (sumk - sum);
        sort(v.rbegin(), v.rend());
        sumk = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            if (i < k) sumk += v[i];
            else sum += v[i];
        }
        int y = abs (sumk - sum);
        cout << max(x, y) << '\n';
    }
    
    return 0;
}