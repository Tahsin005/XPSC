#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    int bills[] = {100, 20, 10, 5, 1};
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        cnt += n / bills[i];
        n %= bills[i];
    }
    cout << cnt << '\n';
    
    return 0;
}