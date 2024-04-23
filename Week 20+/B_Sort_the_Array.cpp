#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

    if (is_sorted(a, a + n)) {
        cout << "yes" << '\n';
        cout << 1 << " " << 1 << '\n';
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        int j = i;
        while (j < n - 1 and a[j] > a[j + 1]) j++;

        if (j != i) {
            reverse(a + i, a + j + 1);
            if (is_sorted(a, a + n)) {
                cout << "yes" << '\n';
                cout << i + 1 << " " << j + 1 << '\n';
                return 0;
            } else {
                cout << "no" << '\n';
            }
            break;
        }
    }
    
    return 0;
}