#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int x, y;
        cin >> x >> y;
        int value = x / 10;
        cout << value * y << endl;
    }
    
    return 0;
}