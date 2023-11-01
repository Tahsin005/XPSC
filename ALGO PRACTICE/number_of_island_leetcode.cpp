#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool visited[1002][1002] = {false};
    int n,m;

    void dfs(int i,int j,vector<string>& g){
        if(i < 0 or j < 0) return;
        if(i >= n or j >= m) return;
        if(g[i][j] == '0') return;
        if(visited[i][j]) return;

        visited[i][j] = true;
        dfs(i + 1,j,g);
        dfs(i - 1,j,g);
        dfs(i,j + 1,g);
        dfs(i,j - 1,g);
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        vector<string> g;
        string s;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                s.push_back(grid[i][j]);
            }
            g.push_back(s);
            s.clear();
        }

        n = g.size();
        m = g[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(g[i][j] == '0') continue;
                if(visited[i][j]) continue;
                dfs(i,j,g);
                cnt++;
            }
        }
        return cnt;
    }
};
int main(){
    // Sample input grid
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    Solution solution;
    int numIslands = solution.numIslands(grid);

    cout<<"Number of islands: "<<numIslands<<endl;

    return 0;
}
