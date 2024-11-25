#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

const int M = 1e9 + 7;

void dfs(int vertex, int par, vector<int> g[], vector<int> &subtree_sum, vector<int> &val) {
    subtree_sum[vertex] += val[vertex - 1];
    for (int child : g[vertex]) {
        if (child == par) continue;
        dfs(child, vertex, g, subtree_sum, val);
        subtree_sum[vertex] += subtree_sum[child];
    }
}

int deleteEdge(vector<int> &A, vector<vector<int>> &B) {
    int n = A.size();
    vector<int> g[n + 1];
    vector<int> subtree_sum(n + 1, 0);

    for (auto edge : B) {
        int u = edge[0];
        int v = edge[1];
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0, g, subtree_sum, A);

    long long ans = 0;
    for (int i = 2; i <= n; ++i) {
        long long part1 = subtree_sum[i];
        long long part2 = subtree_sum[1] - part1;

        ans = max(ans, (part1 * part2));
    }

    return ans % M;
}

int main() {
    vector<int> A = {10, 5, 12, 6};
    vector<vector<int>> B = {{1, 2}, {1, 4}, {4, 3}};

    int result = deleteEdge(A, B);

    cout << "Maximum product after deleting an edge: " << result << endl;

    return 0;
}