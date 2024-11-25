#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << '\n';
#define el '\n'
#define vtr vector
#define vii vector<int>
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int, int>
#define out(x) cout << x << "\n";
#define out2(x, y) cout << x << " " << y << "\n";
#define messi cout << "Que Miras Bobo!" << '\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int parent[N];

void dfs(int v, int par = -1) {
    parent[v] = par;
    for (int child: g[v]) {
        if(child == par) continue;
        dfs(child, v);
    }
}

vector<int> path(int v) {
    vector<int> ans;
    while (v != -1) {
        ans.push_back(v);
        v = parent[v];
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
/*
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
6 7


Lca: 5

*/
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    int a, b;
    cin >> a >> b;
    vector<int> path_a = path(a);
    vector<int> path_b = path(b);

    int minlen = min(path_a.size(), path_b.size());

    int lowest_common_ancestor = -1;

    for (int i = 0; i < minlen; i++) {
        if (path_a[i] == path_b[i]) {
            lowest_common_ancestor = path_a[i];
        } else {
            break;
        }
    }

    cout << lowest_common_ancestor << el;

    return 0;
}