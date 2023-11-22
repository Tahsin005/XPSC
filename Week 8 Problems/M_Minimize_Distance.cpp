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
//@ Problem Link: https://codeforces.com/contest/1585/problem/C
void solve(){
    int n,k;
    cin >> n >> k;
    vii pos,neg;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x < 0){
            neg.pb(x * (-1));
        }
        else if(x > 0){
            pos.pb(x);
        }
    }

    sort(all(pos));
    sort(all(neg));

    ll ans = 0, a = 0, b = 0;

    if(pos.empty() == false){
        if(pos.size() < k){
            a = pos[pos.size() - 1];
            ans += a;
        }
        else{
            a = pos[pos.size() - 1];
            for(int i = 0; i < pos.size(); i++){
                if(i == pos.size() - 1){
                    ans += pos[i];
                }
                else if((pos.size() - i - 1) % k == 0){
                    ans += pos[i] * 2;
                }
            }
        }
    }

    if(neg.empty() == false){
        if(neg.size() < k){
            b = neg[neg.size() - 1];
            ans += b;
        }
        else{
            b = neg[neg.size() - 1];
            for(int i = 0; i < neg.size(); i++){
                if(i == neg.size() - 1){
                    ans += neg[i];
                }
                else if((neg.size() - i - 1) % k == 0){
                    ans += neg[i] * 2;
                }
            }
        }
    }

    ans += min(a,b);
    cout << ans << el;

    
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