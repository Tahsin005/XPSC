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
#define yes cout << "YES" << endl;
#define no cout << "NO"<< endl;
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
#define out2(x,y) cout << x << " "<< y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    string s;
    cin >> s;
    int cnt = 0;
    map<char,int> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    for(auto [x,y] : mp){
        // cout << x << " " << y << el;
        if(y & 1) cnt++;
    }
    if(cnt > 1){
        cout << "NO SOLUTION" << el;
        return;
    }

    string t;
    for(auto [x,y] : mp){
        if(y % 2 == 0){
            for(int i = 1; i <= y / 2; i++){
                t.push_back(x);
            }
        }
    }
    string cpy = t;
    for(auto [x,y] : mp){
        if(y % 2 != 0){
            for(int i = 1; i <= y; i++){
                t.push_back(x);
            }
        }
    }
    reverse(cpy.begin(), cpy.end());

    string ans = t + cpy;
    cout << ans << el;

}
int main(){
    Tahsin
    ll t;
    t = 1;
    // cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;    
}