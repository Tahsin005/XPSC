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
//@ Problem Link: https://lightoj.com/problem/curious-robin-hood?fbclid=IwAR1tN9-Guz8XYKyzKTpkwpcbUqxwFF07nSIMXdqt3ql3hgxnpTJNOGV4p3s
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

    tree[node] = tree[leftNode] + tree[rightNode];

}

int query(int node,int l,int r,int x,int y){
    if(r < x or l > y){
        return 0;
    }
    if(l >= x and r <= y){
        return tree[node];
    }

    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    return query(leftNode,l,mid,x,y) + query(rightNode,mid + 1,r,x,y);

}

void update(int node,int l,int r,int idx,int val){
    if(idx < l or idx > r){
        return;
    }
    if(l == r and l == idx){
        tree[node] = val;
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;

    update(leftNode,l,mid,idx,val);
    update(rightNode,mid + 1,r,idx,val);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int global_idx = 0;
void index_val(int node,int l,int r,int idx){
    if(idx < l or idx > r){
        return;
    }
    if(l == r and l == idx){
        global_idx = tree[node];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;

    index_val(leftNode,l,mid,idx);
    index_val(rightNode,mid + 1,r,idx);
}
void solve(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    build(1,0,n - 1,a);
    while(q--){
        int x;
        cin >> x;
        if(x == 1){
            int idx;
            cin >> idx;
            // messi
            index_val(1,0,n - 1,idx);
            cout << global_idx << el;
            update(1,0,n - 1,idx,0);
        }
        else if(x == 2){
            int idx,val;
            cin >> idx >> val;
            index_val(1,0,n - 1,idx);
            update(1,0,n - 1,idx,val + global_idx);
        }
        else{
            int x,y;
            cin >> x >> y;
            cout << query(1,0,n - 1,x,y) << el;
        }
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