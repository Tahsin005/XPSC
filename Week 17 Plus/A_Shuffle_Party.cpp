#include<bits/stdc++.h>
#define ll long long
using namespace std;
int nearestPowerOfTwo (int number) {
    if (number and !(number & (number - 1)))
        return number;

    int cnt = 0;
    while (number > 1) {
        number >>= 1;
        cnt++;
    }

    return 1 << cnt;
}
int main(){
    int tt; cin >> tt; while (tt--)  {
        int n;
        cin >> n;
        cout << nearestPowerOfTwo(n) << endl;
    }
    
    return 0;
}