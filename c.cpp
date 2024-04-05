#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "Draw";
        return 0;
    }
    if (a == 1) {
        cout << "Alice";
    } else if (b == 1) {
        cout << "Bob";
    } else {
        int mex = max (a, b);
        if (mex == a) {
            cout << "Alice";
        } else {
            cout << "Bob";
        }
    }
    return 0;
}