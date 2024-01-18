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
e4{
    ordered_set<int> pbds;
    pbds.insert(1);
    pbds.insert(1);
    pbds.insert(5);
    pbds.insert(3);
    pbds.insert(55);
    pbds.insert(2);
    pbds.insert(21);
    pbds.insert(33);
    pbds.insert(55);

    for (auto val: pbds) {
        cout << val << " ";
    }
    nl

    cout << pbds.order_of_key(5) << el;
    cout << pbds.order_of_key(44) << el;
    cout << "__________________" << el;
    cout << *pbds.find_by_order(0) << el;
    cout << *pbds.find_by_order(1) << el;
    cout << *pbds.find_by_order(2) << el;
    cout << *pbds.find_by_order(3) << el;
    cout << *pbds.find_by_order(4) << el;
    cout << *pbds.find_by_order(5) << el;
    
    
    return 0;    
}