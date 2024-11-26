#include<bits/stdc++.h>
#define ll long long
using namespace std;


const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source) {
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty()) {
        int curr_v = q.front();
        q.pop();

        cout << curr_v << " ";

        for (int child : g[curr_v]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = 1;
                level[child] = level[curr_v] + 1;
            }
        }
    }

}

/*
    BFS: It give us the shortest path from particular source node using its level. ** If a graph has weight but all the weights are same and we need to find the shortest path form the source node, we can use BFS instead of Dijkstra.

Input:

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

Output:

1 2 3 13 5 4 6 7 8 9 10 12 11
1 : 0
2 : 1
3 : 1
4 : 2
5 : 2
6 : 3
7 : 3
8 : 3
9 : 3
10 : 3
11 : 4
12 : 4
13 : 1

*/
int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1);

    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << " : " << level[i] << '\n';
    }

    return 0;
}