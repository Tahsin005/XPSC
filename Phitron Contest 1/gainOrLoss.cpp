#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; 
    cin >> n;

    int arr[6][4];
    arr[1][1] = 2;
    arr[1][2] = 3;
    arr[1][3] = 10;

    arr[2][1] = 2;
    arr[2][2] = 3;
    arr[2][3] = 10;

    arr[3][1] = 2;
    arr[3][2] = 3;
    arr[3][3] = 10;

    arr[4][1] = 1;
    arr[4][2] = 3;
    arr[4][3] = 10;

    arr[5][1] = 3;
    arr[5][2] = 3;
    arr[5][3] = 10;
    
    bool flag = true;
    for (int i = 1; i <= 5; i++) {
        int m, q, r;
        cin >> m >> q >> r;
        if (n * m < arr[i][1] or n * q < arr[i][2] or n * r < arr[i][3]) {
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "Consistent" << endl;
    else cout << "Inconsistent" << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}