#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        int temp = n;
        int idx = 1;
        for (int idx = 1; idx <= temp; idx++) {
            cout << idx << " ";
            for (int i = n; i >= 1; i--) {
                if (idx != i)
                    cout << i << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}