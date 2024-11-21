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

https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/?purpose=login&source=problem-page&update=google


*/
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];
void dfs(int vertex) {
    visited[vertex] = true;
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
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

