#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int tot = 240, rem = tot - k, cnt = 0, temp = 0;
    for (int i = 1; i <= n; i++) {
        temp = (5 * i);
        if (temp <= rem) {
            cnt++;
            rem -= (5 * i);
        } else {
            break;
        }
    }
    cout << cnt << '\n';
    
    return 0;
}