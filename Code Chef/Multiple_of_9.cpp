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
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int qMark = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '?') qMark++;
        else b = b + (s[i] - '0');
    }
    if(s[0] == '?'){
        cout << 1;
        qMark--;
        while(qMark--){
            cout << 0;
        }
        nl
    }
    else{
        if(qMark > 0){
            b = b % 9;
            if(b == 0){
                qMark--;
                while(qMark--){
                    cout << 1;
                }
                cout << 2 << el;
            }
            else{
                while(qMark--){
                    cout << 1;
                }
                nl
            }
        }
        else{
            if(b % 9) cout << 0 << el;
            else cout << 1 << el;
        }
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