#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159
using namespace std;
int main(){
    char a; cin >> a;
    int b;
    b = int(a);
    // cout << b << endl;
    if ((b >= 65 and b <= 90) or (b >= 97 and b <= 122)) {
        cout << "ALPHA" << endl;
        if (b >= 65 and b <= 90) cout << "IS CAPITAL" << endl;
        else if (b >= 97 and b <= 122) cout << "IS SMALL" << endl;
    } else if (b >= 48 and b <= 57) {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}