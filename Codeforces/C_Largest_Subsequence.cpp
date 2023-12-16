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

// @Problem Link: 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string temp = s;
    sort(all(temp));

    if(s == temp){
        cout << 0 << el;
        return;
    }

    char ch = s[0];
    stack<pair<char,ll>> st;
    
    st.push({s[0],0});

    for(int i = 1; i < n; i++){
        while(st.size() and st.top().first < s[i]){
            st.pop();
        }
        st.push({s[i],i});
    }

    ll cnt = 0;
    vll v;
    string ans = "";

    while(st.size()){
        v.push_back(st.top().second);
        ans += s[st.top().second];
        st.pop();
    }

    reverse(all(v));

    char mx = temp[n - 1];
    for(int i = 0; i < v.size(); i++){
        if(s[v[i]] == mx){
            cnt = i;
        }
    }

    for(int i = 0; i < v.size() / 2; i++){
        swap(s[v[i]], s[v[v.size() - i - 1]]);
    }

    if(s == temp){
        cout << v.size() - cnt - 1 << el;
        return;
    }
    else minus 
    

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