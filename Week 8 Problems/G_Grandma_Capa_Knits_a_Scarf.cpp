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
//@ Problem Link: https://codeforces.com/problemset/problem/1582/C
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> st;
    for(int i = 0; i < n; i++){
        st.insert(s[i]);
    }
    vll v(26,LONG_LONG_MAX);
    for(auto& ch : st){
        int l = 0;
        int r = n - 1;
        int cnt = 0;

        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                if(s[l] == ch){
                    l++;
                    cnt++;
                }
                else if(s[r] == ch){
                    r--;
                    cnt++;
                }
                else{
                    cnt = -1;
                    break;
                }
            }
        }
        if(cnt != -1){
            v[ch - 'a'] = cnt;
        }
    }

    sort(all(v));
    if(v[0] == LONG_LONG_MAX) minus
    else cout << v[0] << el;
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