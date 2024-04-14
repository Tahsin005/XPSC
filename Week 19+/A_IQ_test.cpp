#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        even += (v[i] % 2 ==0);
        odd += (v[i] % 2 != 0);
    }
    
    int index = 1;
    if (odd == 1) {
        for (int &val: v) {
            if (val & 1) {
                cout << index;
                return 0;
            }
            index++;
        }
    } else {
        for (int &val: v) {
            if ((val & 1) == 0) {
                cout << index;
                return 0;
            }
            index++;
        }
    }
    return 0;
}