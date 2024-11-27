#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://vjudge.net/problem/CodeChef-REVERSE

Input:

7 7
1 2
3 2
3 4
7 4
6 2
5 6
7 5

Output:

2

*/

const int N = 1e5 + 10;
const int INF = 1e9 + 10;


vector<pair<int, int>> g[N];
vector<int> lev(N, INF);
int n, m;

int bfs() {
    deque<int> q;
    q.push_back(1);
    lev[1] = 0;

    while (!q.empty()) {
        int cur_v = q.front();
        q.pop_front();

        for (auto child : g[cur_v]) {
            int child_v = child.first;
            int wt = child.second;

            if (lev[cur_v] + wt < lev[child_v]) {
                lev[child_v] = lev[cur_v] + wt;

                if (wt == 1) {
                    q.push_back(child_v);
                } else {
                    q.push_front(child_v);
                }
            }
        }
    }

    return lev[n] == INF ? -1 : lev[n];
}


int main(){
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (x == y) continue;
        g[x].push_back({y, 0});
        g[y].push_back({x, 1});
    }

    cout << bfs() << endl;
    return 0;
}