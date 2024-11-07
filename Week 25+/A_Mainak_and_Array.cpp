/*
        Author: tahsin_ferdous
        Email: tahsin.ferdous3546@gmail.com

        Qué mirás, bobo? Qué mirás, bobo?…
*/
#include<bits/stdc++.h>
#define OJ
using namespace std;
#define ll long long
#define cyes cout << "YES" << '\n'
#define yes cout << "Yes" << '\n'
#define cno cout << "NO"<< '\n'
#define no cout << "No"<< '\n'
#define minus cout << -1 << '\n'
#define nl cout << '\n'
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
#define out(x) cout << x << '\n'
#define out2(x,y) cout << x << " " << y << '\n'
#define messi cout << "Qué mirás, bobo?" << '\n'
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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// @Problem Link:
void TEST_CASE(){
    int n;
    cin >> n;

    vii v(n);
    list<int> l;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        l.push_back(v[i]);
    }

    vii firstHalf;

    int mx = v[n - 1] - v[0];

    for (int i = 0; i < n - 1; i++) {
        int x = l.front();
        l.pop_front();
        l.push_back(x);
        x = l.back() - l.front();
        mx = max(mx, x);
    }
    
    int firstValue = v[0], lastValue = v[n - 1], mnFromFirstHalf = v[0];


    for (int i = 0; i < n - 1; i++) {
        firstHalf.push_back(v[i]);
        mnFromFirstHalf = min(mnFromFirstHalf, v[i]);
        vii secondHalf;
        int mxFromSecondHalf = imin;
        for (int j = i + 1; j < n; j++) {
            secondHalf.push_back(v[j]);
            mxFromSecondHalf = max(mxFromSecondHalf, v[j]);
        }

        int possibility1 = mxFromSecondHalf - firstValue;
        int possibility2 = lastValue - mnFromFirstHalf;
        mx = max({mx, possibility1, possibility2});
    }

    cout << mx << el;



}
e4{
    #ifndef OJ
        freopen("error.txt", "w", stderr);
    #endif
    #ifdef OJ
        Tahsin
    #endif

    ll tc = 1;
    cin >> tc;
    for(ll cs = 1; cs <= tc; cs++){
        // cout << "Case #" << cs << ": ";
        TEST_CASE();
    }
    return 0;
}