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

1 - 91 6
2 - 40 4
3 - 37 2
4 - 34 2
5 - 38 3
6 - 6 1
7 - 7 0
8 - 20 2
9 - 9 0
10 - 21 1
11 - 11 0
12 - 12 1
13 - 13 0


*/

/*
    Given Q queries, Q <= 1e5
    In each given query V,
    Print subtree sum of V , and number of even elements
    in subtree of V
*/


const int N = 1e5 + 10;
vector<int> g[N], subtree_sum(N), even_count(N);

void dfs(int vertex, int parent = 0) {
    subtree_sum[vertex] += vertex;
    if (vertex % 2 == 0) {
        even_count[vertex]++;
    }
    for (int child: g[vertex]) {

        if (child == parent) continue;
        dfs(child, vertex);

        subtree_sum[vertex] += subtree_sum[child];
        even_count[vertex] += even_count[child];
    }
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

    // int q;
    // cin >> q;
    // while (q--) {
    //     int v;
    //     cin >> v;
    //     cout << subtree_sum[v] << " " << even_count[v] << endl;
    // }

    for (int i = 1; i <= n; i++) {
        cout << i << " - " << subtree_sum[i] << " " << even_count[i] << endl;
    }

    return 0;
}

