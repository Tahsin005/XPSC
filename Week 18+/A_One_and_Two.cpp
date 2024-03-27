#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n);
        int two = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 2) {
                two++;
            }
        }
        int k = n, temp = 0;
        bool ok = true;
        for (int i = 0; i < k - 1; i++) {
            if (v[i] == 2) {
                temp++;
            }
            if (2 * temp == two) {
                cout << i + 1 << '\n';
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << -1 << "\n";
        }
    }
    
    return 0;
}