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
//@ Problem Link: https://codeforces.com/problemset/problem/805/B
void solve(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        bool check = true;
        string ans = "";
        for(int i = 1; i <= n; i += 2){
            if(check == true){
                // cout << "bb";
                ans += "bb";
                check = false;
            }
            else if(check == false){
                // cout << "aa";
                ans += "aa";
                check = true;
            }
        }
        cout << ans << el;
    }
    else{
        n--;
        bool check = true;
        string ans = "";
        for(int i = 1; i <= n; i += 2){
            if(check == true){
                // cout << "bb";
                ans += "bb";
                check = false;
            }
            else if(check == false){
                // cout << "aa";
                ans += "aa";
                check = true;
            }
        }
        if(ans[ans.length() - 1] == 'a'){
            ans.push_back('b');
        }
        else{
            ans.push_back('a');
        }
        
        cout << ans << el;
    }
    
}
e4{
    Tahsin
    ll t = 1;
    // cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;    
}