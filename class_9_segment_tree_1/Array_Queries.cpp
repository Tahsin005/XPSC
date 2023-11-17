// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

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
//@ Problem Link: https://lightoj.com/problem/array-queries?fbclid=IwAR01txSXEZajYpwP31Fi5HhmagBnYgXi9xn_PqkD3DjtODD8zEGryrGmZKY
const int mx = 1e5 + 5;
int tree[mx * 3];
void build(int node,int l,int r,int a[]){
    if(l == r){
        tree[node] = a[r];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    build(leftNode,l,mid,a);
    build(rightNode,mid + 1,r,a);

    tree[node] = min(tree[leftNode] , tree[rightNode]);

}

int query(int node,int l,int r,int x,int y){
    if(r < x or l > y){
        return imax;
    }
    if(l >= x and r <= y){
        return tree[node];
    }

    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    return min(query(leftNode,l,mid,x,y) , query(rightNode,mid + 1,r,x,y));

}

void solve(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    build(1,0,n - 1,a);
    while(q--){
        int x,y;
        cin >> x >> y;
        x--, y--;
        cout << query(1,0,n - 1,x,y) << el;
    }
}
e4{
    Tahsin
    ll t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        cout << "Case " << cs << ":" << el;
        solve();
    }
    return 0;    
}