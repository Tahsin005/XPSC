#include <bits/stdc++.h>

using namespace std;

struct Edge {
    int src;
    int dest;
    int weight;
};

void kruskalMST(vector<Edge>& edges, int numVertices) {
    sort(edges.begin(), edges.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });

    vector<int> component(numVertices);
    for (int i = 0; i < numVertices; i++) {
        component[i] = i;
    }

    vector<Edge> mst;
    int totalWeight = 0;

    for (const Edge& edge : edges) {
        int u = edge.src;
        int v = edge.dest;

        if (component[u] != component[v]) {
            mst.push_back(edge);
            totalWeight += edge.weight;

            int oldComponent = component[v];
            int newComponent = component[u];
            for (int i = 0; i < numVertices; i++) {
                if (component[i] == oldComponent) {
                    component[i] = newComponent;
                }
            }
        }
    }

    cout << "Edges in the Minimum Spanning Tree:\n";
    for (const Edge& edge : mst) {
        cout << edge.src << " -- " << edge.dest << " == " << edge.weight << "\n";
    }
    cout << "Total weight of the MST: " << totalWeight << "\n";
}

int main() {
    int numVertices, numEdges;
    cin >> numVertices >> numEdges;

    vector<Edge> edges;

    for (int i = 0; i < numEdges; i++) {
        int src, dest, weight;
        cin >> src >> dest >> weight;
        edges.push_back({src, dest, weight});
    }

    kruskalMST(edges, numVertices);

    return 0;
}
