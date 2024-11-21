#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

8 5
1 2
2 3
2 4
3 5
6 7



*/
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];

vector<vector<int>> connected_components;
vector<int> current_connected_components;
void dfs(int vertex) {
    visited[vertex] = true;
    current_connected_components.push_back(vertex);
    for (int child: g[vertex]) {
        if (visited[child]) continue;
        dfs(child);
    }


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

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            current_connected_components.clear();
            dfs(i);
            connected_components.push_back(current_connected_components);
            cnt++;
        }
    }

    cout << cnt << endl;

    for (vector<int> cc: connected_components) {
        for (int v: cc) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}

