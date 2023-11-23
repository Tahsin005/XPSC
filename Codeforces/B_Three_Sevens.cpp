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
//@ Problem Link: https://codeforces.com/contest/1798/problem/B
e4{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 1; i <= n; i++){
            int m;
            cin >> m;
            for(int j = 1; j <= m; j++){
                int x;
                cin >> x;
                mp[x] = i;
            }
        }
        vii ans(n + 1, -1);
        for(auto [x, y] : mp){
            if(ans[y] == -1){
                ans[y] = x;
            }
        }
        bool flag = true;
        for(int i = 1; i <= n; i++){
            if(ans[i] == -1){
                flag = false;
                break;
            }
        }
        if(flag == false){
            cout << -1 << endl;
            continue;
        }
        for(int i = 1; i <= n; i++){
            cout << ans[i] << " ";
        }
        nl
    }
    
    return 0;    
}