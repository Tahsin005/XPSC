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

// ll binPow(ll a,ll b){
//     if(b == 0) return 1;
//     ll res = binPow(a, b / 2);

//     if(b & 1){
//         return a * res * res;
//     }
//     else{
//         return res * res;
//     }
// }

const int MOD = 1e9 + 7;
ll binPow(ll a,ll b){
    if(b == 0) return 1;
    ll res = binPow(a, b / 2);

    if(b & 1){
        return (a * ((res * res) % MOD)) % MOD;
    }
    else{
        return (res * res) % MOD;
    }
}
e4{
    ll a = 2, b = 13;
    cout << binPow(a,b) << el;
    return 0;    
}