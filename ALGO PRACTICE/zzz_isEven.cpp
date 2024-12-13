#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isEven (int n) {
    int absValOfN = abs(n);
    bool even = true;
    for (int i = 0; i < absValOfN; i++) {
        even = !even;
    }

    return even;
}
int main(){
    int n = 7;

    cout << isEven(n) << '\n';

    return 0;
}