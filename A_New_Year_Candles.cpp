#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int cnt = n;
    while (n >= k) {
        cnt += n / k;
        n = n / k + n % k;
    }
    cout << cnt  << '\n';
    
    return 0;
}