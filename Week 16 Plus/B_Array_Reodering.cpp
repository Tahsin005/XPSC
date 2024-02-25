#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc; cin >> tc; while (tc--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if(__gcd(a[i], 2 * a[j]) >1 or __gcd(2 * a[i], a[j]) > 1) {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    
    return 0;
}