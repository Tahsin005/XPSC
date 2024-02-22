#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        int i = 2;
        int sq = 1;
        while (sq < n) {
            sq = i * i;
            i++;
        }

        i -= 1;
        // cout << i << endl;
        int midval = ((i - 1) * i) + 1;
        // cout << mid << endl;

        if (n < midval) {
            cout << n - ((i - 1) * (i - 1)) << " " << i << endl;
        } else if (n == midval) {
            cout << i << " " << i << endl;
        } else {
            cout << i << " " << ((i) * (i)) - n + 1  << endl;
        }
    }
    
    return 0;
}