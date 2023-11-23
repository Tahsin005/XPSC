#include<bits/stdc++.h>
#define ll long long
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
9 11
*/
const int N = 1e5 + 10;
vector<int> graph[N];

int vis[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while(!q.empty()){
        int curr_v = q.front();
        q.pop();

        cout << curr_v << " ";

        for(int child: graph[curr_v]){
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                level[child] = level[curr_v] + 1;
            }
        }
    }
    cout << '\n';
}
/*
    BFS: It give us the shortest path from particular source node using its level. ** If a graph has weight but all the weights are same and we need to find the shortest path form the source node, we can use BFS instead of Dijkstra.
*/
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);


    for(int i = 1; i <= n; i++){
        cout << i << " : `" << level[i] << '\n';
    }
    return 0;    
}