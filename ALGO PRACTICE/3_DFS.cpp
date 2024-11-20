#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6


*/
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];
void dfs(int vertex) {
    // Take action on vertex after entering the vertex
    visited[vertex] = true;
    cout << vertex << endl;
    for (int child: g[vertex]) {
        cout << "Parent: " << vertex << ", child: " << child << endl;
        if (visited[child]) continue;
        // Take action on child befor entering the child node
        dfs(child);
        // Take action on child after exiting the child node
    }
    // Take action on vertex before exiting the vertex
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

    dfs(1);

    // Time Complexity: O(v + e)

    return 0;
}

