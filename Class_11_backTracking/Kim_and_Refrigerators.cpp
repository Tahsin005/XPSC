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

// @Problem Link: https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/kim-and-refrigerators
int n;
int si,sj,di,dj;
vector<pair<int,int>> a(15);
bool vis[15];
int mn;

void backTrack(int n,vii &v){
    if(v.size() == n){
        int sum = 0;
        int lasti = si, lastj = sj;
        for(int x: v){
            int temp = abs(lasti - a[x].first) + abs(lastj - a[x].second);
            sum += temp;
            lasti = a[x].first;
            lastj = a[x].second;
        }
        sum += abs(lasti - di) + abs(lastj - dj);
        mn = min(mn, sum);
    }
    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            vis[i] = true;
            v.push_back(i);
            backTrack(n,v);
            vis[i] = false;
            v.pop_back();
        }
    }
}
void solve(){
    cin >> n >> si >> sj >> di >> dj;

    for(int i = 1; i <= n; i++){
        cin >> a[i].first >> a[i].second;
    }

    memset(vis,false,sizeof(vis));
    vii v;
    mn = imax;
    backTrack(n,v);

    cout << mn;    

}
e4{
    #ifndef OJ
        freopen("error.txt", "w", stderr);
    #endif
    #ifdef OJ 
        Tahsin
    #endif

    ll t = 10;
    // cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        cout << "# " << cs << " ";
        solve();
        nl
    }
    return 0;
}