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
    int n;
    cin >> n;
    vii a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int GCD = a[0];
    for (int i = 1; i < n; i++) {
        GCD = __gcd(GCD, a[i]);
    }

    if (GCD == 1) {
        cout << 0 << el;
        return;
    }

    int ans = imax;

    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = __gcd(a[i], (i + 1));
        int g = a[0];
        for (int j = 1; j < n; j++) {
            g = __gcd(g, a[j]);
        }
        if (g == 1) {
            ans = min(ans, n - i);
        }
        a[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        int tempI = a[i];
        a[i] = __gcd(a[i], (i + 1));
        for (int j = i + 1; j < n; j++) {
            int tempJ = a[j];
            a[j] = __gcd(a[j], (j + 1));
            int g = a[0];
            for (int k = 1; k < n; k++) {
                g = __gcd(g, a[k]);
            }
            if (g == 1) {
                ans = min(ans, (n - i) + (n - j));
            }
            a[j] = tempJ;
        }
        a[i] = tempI;
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