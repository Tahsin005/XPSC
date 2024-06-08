#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int64_t n; cin >> n;
    int64_t MIN = 0, sum = 0;
    for (int64_t i = 0; i < n; i++) {
        int64_t x; cin >> x;
        sum += x;
        MIN = min (MIN, sum);
    }
    cout << MIN * -1 << '\n';
    return 0;
}