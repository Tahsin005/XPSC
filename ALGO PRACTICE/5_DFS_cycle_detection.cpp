#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

Does not exists
8 5
1 2
2 3
2 4
3 5
6 7

Exists
8 6
1 2
2 3
2 4
3 5
6 7
1 5


*/
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];
bool dfs(int vertex, int parent) {
    visited[vertex] = true;
    bool isLoopExists = false;
    for (int child: g[vertex]) {
        if (visited[child] and child == parent) continue;
        if (visited[child]) return true;
        isLoopExists |= dfs(child, vertex);
    }

    return isLoopExists;
}


int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    bool exists = false;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (dfs(i, 0)) {
                exists = true;
                break;
            }
        }
    }

    cout << exists << endl;

    return 0;
}

