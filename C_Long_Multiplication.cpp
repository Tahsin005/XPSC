#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        string x, y; cin >> x >> y;
        int len = x.length();
        for (int i = 1; i <= len; i++) {
            if((x > y and x[i] > y[i]) or (x < y and x[i] < y[i])) {
                swap(x[i],y[i]);
            }
        }
        cout << x << '\n' << y << '\n';
    }
    
    return 0;
}