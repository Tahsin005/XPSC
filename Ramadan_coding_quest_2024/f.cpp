#include<bits/stdc++.h>
using namespace std;
int main () {
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int arr[n], brr[n];
    int cnt_a = 0, cnt_b = 0;
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
        if(arr[i] + a >= s and arr[i] + a <= t) {
            cnt_a++;
        }
    }
    for(int i = 0; i < n; i++) {
        cin >> brr[i];
        if(brr[i] + b >= s and brr[i] + b <= t) {
            cnt_b++;
        }
    }
    
    cout << cnt_a << endl;
    cout << cnt_b << endl;
    return 0;
}