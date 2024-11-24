#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

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
Node: 1, Depth: 0, Height: 4
Node: 2, Depth: 1, Height: 3
Node: 3, Depth: 1, Height: 3
Node: 4, Depth: 2, Height: 2
Node: 5, Depth: 2, Height: 2
Node: 6, Depth: 3, Height: 0
Node: 7, Depth: 3, Height: 0
Node: 8, Depth: 3, Height: 1
Node: 9, Depth: 3, Height: 0
Node: 10, Depth: 3, Height: 1
Node: 11, Depth: 4, Height: 0
Node: 12, Depth: 4, Height: 0
Node: 13, Depth: 1, Height: 0



*/
const int N = 1e5 + 10;
vector<int> g[N];
vector<int> depth(N), height(N);

void dfs(int vertex, int parent = 0) {
    // Take action on vertex after entering the vertex
    // cout << vertex << endl;
    for (int child: g[vertex]) {
        // cout << "Parent: " << vertex << ", child: " << child << endl;

        if (child == parent) continue;
        // Take action on child befor entering the child node
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        // Take action on child after exiting the child node
        height[vertex] = max(height[vertex], height[child] + 1);
    }
    // Take action on vertex before exiting the vertex
}


int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1, 0);

    for (int i = 1; i <= n; i++) {
        cout << "Node: " << i << ", Depth: " << depth[i] << ", Height: " << height[i] << endl;
    }
    return 0;
}

