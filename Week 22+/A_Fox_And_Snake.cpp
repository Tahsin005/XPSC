#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m; cin >> n >> m;

    string s = string(m, '#'), s2 = string(m, '.'), s3 = string(m, '.');

    s2[0] = '#';
    s3[m - 1] = '#';

    for  (int i = 1; i <= n; i++) {
        if (i % 4 == 1 or i % 4 == 3)
            cout << s << '\n';
        if (i % 4 == 0)
            cout << s2 << '\n';
        if (i % 4 == 2)
            cout << s3 << '\n';
    }

    
    return 0;
}