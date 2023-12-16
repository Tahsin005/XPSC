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
bool vis[20];
void back(int n,vii & v){
    if(v.size() == n){
        for(auto val: v){
            cout << val << " ";
        }nl
    }
    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            // cout << i << " ";
            v.push_back(i);
            vis[i] = true;
            back(n,v);
            vis[i] = false;
            v.pop_back();
        }
    }
}
void solve(){
    int n; cin >> n;
    memset(vis,false,sizeof(vis));
    vii v;
    back(n,v);
}
e4{
    solve();
    
    return 0;    
}