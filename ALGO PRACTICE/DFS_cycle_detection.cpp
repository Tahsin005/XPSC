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


const int N = 1e5 + 7;
vtr<int> graph[N];
bool vis[N];
/*
8 5
1 2
2 3
2 4
3 5
6 7
*/
bool dfs(int vertex,int par){
    vis[vertex] = true;

    bool isLoopExist = false;
    for(int child: graph[vertex]){
        if(vis[child] and child == par) continue;
        if(vis[child]) return true;

        isLoopExist |= dfs(child,vertex);
    }

    return isLoopExist;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bool flag = false;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            flag = true;
            break;
        }
    }

    cout<<flag<<el;
    return 0;    
}