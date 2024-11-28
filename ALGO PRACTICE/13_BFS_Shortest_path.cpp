#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


Problem link: https://www.spoj.com/problems/NAKANJ/

Input:

3
a1 h8
a1 c2
h8 c3

Output:

6
1
4


*/

const int N = 8;
const int INF = 1e9 + 10;
int vis[N][N];
int level[N][N];


int getX(string s) {
    return s[0] - 'a';
}

int getY(string s) {
    return s[1] - '1';
}

vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {-2, -1}, {-2, 1}
};

bool isValid (int x, int y) {
    return x >= 0 and y >= 0 and x < N and y < N;
}

int bfs(string source, string dest) {
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);

    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;
    level[sourceX][sourceY] = 0;

    while (!q.empty()) {
        pair<int, int> v = q.front();
        q.pop();

        int x = v.first, y = v.second;
        for (auto movement : movements) {
            int childX = movement.first + x;
            int childY = movement.second + y;
            if (!isValid(childX, childY)) continue;
            if (!vis[childX][childY]) {
                q.push({childX, childY});
                vis[childX][childY] = 1;
                level[childX][childY] = level[x][y] + 1;
            }
        }

        if (level[destX][destY] != INF) break;
    }

    return level[destX][destY];
}

void reset() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            vis[i][j] = 0;
            level[i][j] = INF;
        }
    }
}


int main(){
    int n;
    cin >> n;

    while (n--) {
        reset();
        string s1, s2;
        cin >> s1 >> s2;
        cout << bfs(s1, s2) << '\n';
    }

    return 0;
}