//                      ...              ...                                                             
//    .::::::::.       .@@+              %@%                                                             
//    =@@@@@@@@+       .@@+              +*+                                                             
//    -**#@@%**-       .@@+                                                                              
//       :@@-    :=+:  .@@+.==    .=+-   ::: ::: -+:                                                     
//       :@@-   #@@@@% .@@#@@@%  +@@@@@: %@% #@##@@@-                                                    
//       :@@-  +@@+*@@+.@@@+%@@=.@@+:%@% %@% #@@**@@%                                                    
//       :@@-  :--  @@*.@@+ .@@*:@@= ::: %@% #@%  *@@                                                    
//       :@@-   -*##@@*.@@+  @@* %@@@*-  %@% #@%  *@@                                                    
//       :@@-  =@@#*@@*.@@+  @@*  +#@@@* %@% #@%  *@@                                                    
//       :@@-  @@#  @@*.@@+  @@*:== .#@@ %@% #@%  *@@                                                    
//       :@@-  %@@=*@@#.@@+  @@*-@@=:%@@ %@% #@%  *@@                                                    
//       :@@-  -@@@%%@@.@@+  @@* *@@@@@- %@% #@%  *@@                                                    
//       .--.   :+= :-- --.  :-:  :=+-.  :-: :-:  :--               
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
#define HERE cerr << "here - " <<__LINE__ << "\n";
#else
#define debug(x...)
#define HERE cerr << "here - " <<__LINE__ << "\n";
#endif

// @Problem Link: https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/warmholes/problem
class WarmHole{
    public:
        int si, sj, di, dj, c;
};
int n;
int si, sj, di, dj;
vector<WarmHole> a(10);
bool vis[15];
int mn;
void back(int n, vii &v){
    int sum = 0;
    int lasti = si, lastj = sj;
    for(int x : v){
        int tmp = abs(lasti - a[x].si) + abs(lastj - a[x].sj) + a[x].c;
        lasti = a[x].di;
        lastj = a[x].dj;
        sum += tmp;
    }
    sum += abs(lasti - di) + abs(lastj - dj);
    // reverse(as it is bi-directional)
    int sum2 = 0;
    int lasti2 = si, lastj2 = sj;
    for(int x : v){
        int tmp = abs(lasti2 - a[x].di) + abs(lastj2 - a[x].dj) + a[x].c;
        lasti2 = a[x].si;
        lastj2 = a[x].sj;
        sum2 += tmp;
    }
    sum2 += abs(lasti2 - di) + abs(lastj2 - dj);
    if(min(sum, sum2) > mn){
        return;
    }
    mn = min({mn, sum, sum2});

    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            vis[i] = true;
            v.push_back(i);
            back(n, v);
            vis[i] = false;
            v.pop_back();
        }
    }
}
void solve(){
    cin >> n;
    cin >> si >> sj >> di >> dj;
    for(int i = 1; i <= n; i++){
        cin >> a[i].si >> a[i].sj >> a[i].di >> a[i].dj >> a[i].c;
    }
    memset(vis, false, sizeof(vis));
    mn = imax;
    vii v;
    back(n, v);
    cout << mn << el;
    

}
e4{
    #ifndef OJ
        freopen("error.txt", "w", stderr);
    #endif
    #ifdef OJ 
        Tahsin
    #endif

    ll t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}