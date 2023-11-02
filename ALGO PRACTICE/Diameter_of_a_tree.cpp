#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
/* 
14
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8 
8 12
4 9
4 10
10 11
12 14
*/

const int N = 1e5;

vtr<int> g[N];
int depth[N];


void dfs(int vertex,int par){
    // Take action on vertex after entering the vertex
    for(int child: g[vertex]){
        // Take action on child node before entering the child node
        if(child == par) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child,vertex);
        // Take action on child node after exiting the child node
    }
    // Take action on vertex before exiting the vertex
}
/*
    1. With any node as root, find max depth node;
    2. With that node as root, find the max depth node / distance and
       will get the diameter of the tree
*/

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n - 1; i++){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1,-1);

    int mx_depth = -1;
    int mx_depth_node = -1;
    for(int i = 1; i <= n; i++){
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
            mx_depth_node = i;
        }
    }
    // cout<<mx_depth<<" "<<mx_depth_node<<el;

    memset(depth,0,sizeof(depth));

    dfs(mx_depth_node, -1);
    int finalMx_depth = -1;
    for(int i = 1; i <= n; i++){
        if(finalMx_depth < depth[i]){
            finalMx_depth = depth[i];
        }
    }
    cout<<"Depth of the tree is : "<<finalMx_depth<<el;
    return 0;    
}