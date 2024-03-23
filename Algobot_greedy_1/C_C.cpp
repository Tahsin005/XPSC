#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int f,s;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'B') {
                f = i;
                break;
            }
        }
    
        for (int i = n - 1; i >= 0; i--) {
            if (str[i] == 'B') {
                s = i;
                break;
            }
        }
        cout << abs(f - s) + 1 << '\n';
    }
    
    return 0;
}