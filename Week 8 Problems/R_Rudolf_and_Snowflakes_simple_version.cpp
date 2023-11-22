// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

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
//@ Problem Link: 
int binPow(int a, int n){ 
    int res = 1; 
    while(n){ 
        if(n & 1){
            res *= a;
            --n;
        }
        else{
            a *= a;
            n >>= 1;
        }
    } 
    return res;
}
void solve(){
    int n;
    cin >> n;

    for(int i = 2; i < 64; i++){
        int l = 2;
        int h = 1e9 + 10;

        while(l < h - 1){
            int mid = l + (h - l) / 2;

            __int128 val = 0;
            __int128 toadd = 1;

            for(int j = 0; j < i + 1; j++){
                val += toadd;
                toadd *= mid;
                if(val > n)
                    break;
            }

            if(val <= n)
                l = mid;
            else
                h = mid;
        }

        int val = 0;

        for(int j = 0; j < i + 1; j++)
            val += binPow(l, j);

        if(val == n){
            cyes
            return;
        }
    }
    cno
}
e4{
    Tahsin
    ll t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;    
}