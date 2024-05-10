#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int a,b,c,d; cin>>a>>b>>c>>d;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        if (((a >= c and a <= d) and (b <= c or b >= d)) or ((b >= c and b <= d) and (a <= c or a >= d)) or ((c >= a and c <= b) and (d <= a or d >= b)) or ((d >= a and d <= b) and (c <= a or c >= b))) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}