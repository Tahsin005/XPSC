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
    vii v(n);
    int onecnt = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1) onecnt++;
    }
    if(onecnt == 1){
        cout << 0 << el;
        // messi
        return;
    }
    if(onecnt == n){
        cout << 0 << el;
        // messi
        return;
    }
    vii zero, one;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) one.push_back(i + 1);
        else zero.push_back(i + 1);
    }

    int f1 = one[0];
    int fl = one[one.size() - 1];

    int cnt = 0;
    for(int i = 0; i < zero.size(); i++){
        if(zero[i] > f1 and zero[i] < fl){
            cnt++;
        }
    }
    cout << cnt << el;
    // nl
    // messi
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