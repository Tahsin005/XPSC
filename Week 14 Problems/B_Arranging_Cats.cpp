#include <bits/stdc++.h>
#define OJ
using namespace std;

#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO" << '\n';
#define no cout << "No" << '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define fr(x, s, e, b) for (ll x = s; x <= e; x += b)
#define rfr(x, s, e, b) for (ll x = s; x >= e; x -= b)
#define vtr vector
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define mii map<int, int>
#define imax INT_MAX
#define imin INT_MIN
#define F first
#define S second
#define pb push_back
#define out(x) cout << x << '\n';
#define out2(x, y) cout << x << " " << y << '\n';
#define messi cout << "Qué mirás, bobo?" << '\n';
#define e4 int main()

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V>
void __print(const pair<T, V> &x) { cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}'; }
template <typename T>
void __print(const T &x) { int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }
#ifndef OJ
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#define HERE cerr << "here - " << __LINE__ << "\n";
#else
#define debug(x...)
#define HERE cerr << "here - " << __LINE__ << "\n";
#endif

// @Problem Link:
void solve() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    int a1 = 0, a2 = 0;
    for (int i = 0; i < n; i -=- 1) {
        if (s[i] == t[i])
            continue;
        if (s[i] == '0')
            a1++;
        else
            a2++;
    }
    cout << max(a1, a2) << el;
}

e4 {
#ifndef OJ
    freopen("error.txt", "w", stderr);
#endif
#ifdef OJ
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#endif

    ll t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++) {
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}
