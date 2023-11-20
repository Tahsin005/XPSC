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
//@ Problem Link: https://codeforces.com/contest/1898/problem/A
void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnta = 0, cntb = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') cnta++;
        else cntb++;
    }
    if(cntb == k){
        cout << 0 << el;
        return;
    }
    if(cntb < k){
        int tempA = 0;
        for(int i =  0; i < n; i++){
            if(s[i] == 'A'){
                tempA++;
            }
            if(tempA == k - cntb){
                cout << 1 << el;
                cout << i + 1 << " " << "B" << el;
                break;
            }
        }
        return;
    }
    else{
        int tempB = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                tempB++;
            }
            if(tempB == cntb - k){
                cout << 1 << el;
                cout << i + 1 << " " << "A" <<el;
                break;
            }
        }
        return;
    }

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