#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, cnt = 0; cin>> n;

        bool f = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt += x % 3;
            if (x % 3 == 1)
                f = 1;
        }
        if (cnt % 3 == 0)
            cout << "0";
        else if (cnt % 3 == 2)
            cout << "1";
        else if (f)
            cout << "1";
        else
            cout << "2";
        cout << "\n";
    }
    
    return 0;
}