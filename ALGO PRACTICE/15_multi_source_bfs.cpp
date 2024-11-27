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

const int N = 1e3 + 10;
const int INF = 1e9 + 10;


vector<pair<int, int>> g[N];
int val[N][N];
int vis[N][N];
int lev[N][N];
int n, m;

int bfs() {
    
}

void reset() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vis[i][j] = 0;
            lev[i][j] = INF;
        }
    }
}
int main(){
    int t; cin >> t; while (t--) {
        cin >> n >> m;
        reset();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> val[i][j];
            }
        }

        cout << bfs() << endl;
    }

    return 0;
}