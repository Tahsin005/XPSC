#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9 + 7;

int binExpRec (int a,int b) {
    if (b == 0) return 1;
    int res = binExpRec(a, b / 2);

    if (b & 1) {
        return (a * ((res * 1LL *res) % M)) % M;
    } else {
        return (res * 1LL * res) % M;
    }
}
int main(){
    int a, b; cin >> a >> b;
    int ans = binExpRec(a, b);
    cout << ans << '\n';
    return 0;
}