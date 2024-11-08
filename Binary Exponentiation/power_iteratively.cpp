#include<bits/stdc++.h>
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO"<< '\n';
#define no cout << "No"<< '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int>
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

// int binPow(int a,int b){
//     int ans = 1;
//     while(b){
//         if(b & 1){
//             ans = ans * a;
//         }
//         a = a * a;
//         b >>= 1;
//     }
//     return ans;
// }

const int MOD = 1e9 + 10;
int binPow(int a,int b){
    int ans = 1;
    while(b){
        if(b & 1){
            ans = (ans * 1LL * a) % MOD;
        }
        a = (a * 1LL * a) % MOD;
        b >>= 1;
    }
    return ans;
}
e4{
    int a = 2, b = 13;
    cout << binPow(a,b) << el;

    return 0;
}