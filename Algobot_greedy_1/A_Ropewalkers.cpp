#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d; cin >> d;
    sort(arr, arr + n);
    int ans = 0;
    if ((arr[1] - arr[0]) >= d) {

    } else {
        ans += (d - (arr[1] - arr[0]));
    }

    if ((arr[2] - arr[1]) >= d) {

    } else {
        ans += (d - (arr[2] - arr[1]));
    }
    cout << ans << '\n';
    return 0;
}