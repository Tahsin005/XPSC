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
#define all(u) u.begin(), u.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(u) cout << u << '\n';
#define out2(u,x) cout << u << " " << x << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
void __print(int u) {cerr << u;}
void __print(long u) {cerr << u;}
void __print(long long u) {cerr << u;}
void __print(unsigned u) {cerr << u;}
void __print(unsigned long u) {cerr << u;}
void __print(unsigned long long u) {cerr << u;}
void __print(float u) {cerr << u;}
void __print(double u) {cerr << u;}
void __print(long double u) {cerr << u;}
void __print(char u) {cerr << '\'' << u << '\'';}
void __print(const char *u) {cerr << '\"' << u << '\"';}
void __print(const string &u) {cerr << '\"' << u << '\"';}
void __print(bool u) {cerr << (u ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &u) {cerr << '{'; __print(u.first); cerr << ','; __print(u.second); cerr << '}';}
template<typename T>
void __print(const T &u) {int x = 0; cerr << '{'; for (auto &i: u) cerr << (x++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef OJ
#define debug(u...) cerr << "[" << #u << "] = ["; _print(u)
#define HERE cerr << "here - " <<__LINE__ << "\n";
#else
#define debug(u...)
#define HERE cerr << "here - " <<__LINE__ << "\n";
#endif

// @Problem Link: 
void solve(){
    ll n,x;
    cin >> n >> x;
    multiset<ll> st;
    for(ll i = 0; i < n; i++){
        ll u;
        cin >> u;
        st.insert(u);
    }
    ll ans = 0;
    for(auto val : st){
        auto h = st.find(val * x);
        if(h != st.end()){
            st.erase(h);
        }
        else ans++;
    }
    cout << ans << el;
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