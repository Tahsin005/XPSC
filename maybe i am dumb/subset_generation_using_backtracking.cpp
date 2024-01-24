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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//@ Problem Link: 
vector<vector<int>> subsets;
void generate(vector<int> &subset, int i, vector<int> &v) {
    if (i == v.size()) {
        subsets.push_back(subset);
        return;
    }

    // ith element not in the subset
    generate(subset, i + 1, v);

    // ith element in subset
    subset.push_back(v[i]);
    generate(subset, i + 1, v);
    subset.pop_back();
}
e4{
    int n;
    cin >> n;
    vii v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> empt;
    generate(empt, 0, v);
    for (auto val: subsets) {
        for (auto i: val) {
            cout << i << " ";
        }
        cout << '\n';
    }
    
    return 0;    
}