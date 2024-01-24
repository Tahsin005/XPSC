/*
        Author: tahsin_ferdous
        Email: tahsin.ferdous3546@gmail.com

        Qué mirás, bobo? Qué mirás, bobo?…
*/          
#include<bits/stdc++.h>
#define OJ
using namespace std;
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO"<< '\n';
#define no cout << "No"<< '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define fr(x, s, e, b) for (ll x = s; x <= e; x = x + b)
#define rfr(x, s, e, b) for (ll x = s; x >= e; x = x - b)
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define pii pair<int,int>
#define mii map<int,int>
#define imax INT_MAX
#define imin INT_MIN
#define F first
#define S second
#define pb push_back
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define messi cout << "Qué mirás, bobo?" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef OJ
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#define HERE cerr<<"here - "<<__LINE__<<"\n";
#else
#define debug(x...)
#define HERE cerr<<"here - "<<__LINE__<<"\n";
#endif

// @Problem Link: 
void solve(){
    string s;
    cin >> s;
    s += '.';
    string temp = "";
    vtr<string> v;
    int l = s.length();
    fr(i, 0, l - 1, 1){
        if(s[i] == '.'){
            v.push_back(temp);
            temp.clear();
        }
        else{
            temp += s[i];
        }
    }
    int n = v.size();
    if(n <= 1){
        cno 
        return;
    }
    for(auto val: v){
        if(val.empty() == true){
            cno 
            return;
        }
    }
    if(n == 2){
        if(v[1].size() >= 4 or v[0].size() >= 9){
            cno 
            return;
        }
        else{
            cyes 
            cout << v[0] << "." << v[1] << el;
            return;
        }
    }

    fr(i, 1, n - 2, 1){
        if(v[i].size() >= 12 or v[i].size() <= 1){
            cno 
            return;
        }
    }
    cyes 
    cout << v[0] << ".";
    fr(i, 1, n - 2, 1){
        if(v[i].size() > 9) {
            int j;
            for(j = 0; j < 3; j++){
                cout << v[i][j];
            }nl
            for(; j < v[i].size(); j++){
                cout << v[i][j];
            }
            cout << ".";
        } 
        else{
            for(int j = 0; j < v[i].size(); j++){
                cout << v[i][j];
                if(j == 0){
                    nl
                }
            }
            cout << ".";
        }
    }  
    cout << v.back() << el;


}
e4{
    #ifndef OJ
        freopen("error.txt", "w", stderr);
    #endif
    #ifdef OJ 
        Tahsin
    #endif

    ll t = 1;
    // cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}