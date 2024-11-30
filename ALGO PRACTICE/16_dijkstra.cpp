#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int, int>> g[N];
int dist[N];

// https://leetcode.com/problems/network-delay-time/


// O(v + e log v)
int dijkstra(int source, int n, vector<pair<int, int>> g[]) {
    vector<int> dist(N, INF);
    vector<int> vis(N, 0);

    set<pair<int, int>> st;
    st.insert({0, source});
    dist[source] = 0;


    while (!st.empty()) {
        auto node = *st.begin();
        int v = node.second;
        int dis = node.first;
        st.erase(st.begin());
        if (vis[v]) continue;
        vis[v] = 1;
        for (auto child : g[v]) {
            int child_v = child.first;
            int weight = child.second;

            if (dist[v] + weight < dist[child_v]) {
                dist[child_v] = dist[v] + weight;
                st.insert({dist[child_v], child_v});
            }
        }
    }
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) return -1;
        ans = max(ans, dist[i]);
    }

    return ans;
}

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int, int>> g[N];
    for (auto vec : times) {
        g[vec[0]].push_back({vec[1], vec[2]});
    }

    return dijkstra(k, n, g);
}

int main () {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back({y, w});
    }
    return 0;
}