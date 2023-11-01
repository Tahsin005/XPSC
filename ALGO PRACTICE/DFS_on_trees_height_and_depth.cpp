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
13
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
*/

const int N = 1e5;

vtr<int> g[N];
int height[N],depth[N];


void dfs(int vertex,int par){
    // Take action on vertex after entering the vertex
    for(int child: g[vertex]){
        // Take action on child node before entering the child node
        if(child == par) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child,vertex);
        // Take action on child node after exiting the child node
        height[vertex] = max(height[vertex], height[child] + 1);
    }
    // Take action on vertex before exiting the vertex
}
/*
    Depth is calculated from the top
    Height is calculated from the bottom(when exiting the child node)
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

    dfs(1,0);
    for(int i = 1; i <= n; i++){
        out2(depth[i],height[i])
    }
    return 0;    
}