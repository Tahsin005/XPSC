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
    string s = to_string(n);

    vector<string> ans;
    ans.push_back("1");
    ans.push_back("11");
    ans.push_back("111");
    ans.push_back("1111");
    ans.push_back("2");
    ans.push_back("22");
    ans.push_back("222");
    ans.push_back("2222");
    ans.push_back("3");
    ans.push_back("33");
    ans.push_back("333");
    ans.push_back("3333");
    ans.push_back("4");
    ans.push_back("44");
    ans.push_back("444");
    ans.push_back("4444");
    ans.push_back("5");
    ans.push_back("55");
    ans.push_back("555");
    ans.push_back("5555");
    ans.push_back("6");
    ans.push_back("66");
    ans.push_back("666");
    ans.push_back("6666");
    ans.push_back("7");
    ans.push_back("77");
    ans.push_back("777");
    ans.push_back("7777");
    ans.push_back("8");
    ans.push_back("88");
    ans.push_back("888");
    ans.push_back("8888");
    ans.push_back("9");
    ans.push_back("99");
    ans.push_back("999");
    ans.push_back("9999");

    int cnt = 0;
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] != s){
            cnt += ans[i].length();
        }
        else if(ans[i] == s){
            cnt += ans[i].length();
            break;
        }
    }
    cout << cnt << el;
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