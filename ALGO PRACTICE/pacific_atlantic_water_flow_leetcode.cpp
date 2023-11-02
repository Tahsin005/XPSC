#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution
{
public:
    void dfs(int i, int j, vector<vector<int>> &height, vector<vector<bool>> &ocean)
    {

        int n = height.size();
        int m = height[0].size();
        if (ocean[i][j] == false)
            ocean[i][j] = true;
        if (i > 0 && height[i - 1][j] >= height[i][j] && ocean[i - 1][j] == false)
            dfs(i - 1, j, height, ocean);
        if (j > 0 && height[i][j - 1] >= height[i][j] && ocean[i][j - 1] == false)
            dfs(i, j - 1, height, ocean);
        if (i < n - 1 && height[i + 1][j] >= height[i][j] && ocean[i + 1][j] == false)
            dfs(i + 1, j, height, ocean);
        if (j < m - 1 && height[i][j + 1] >= height[i][j] && ocean[i][j + 1] == false)
            dfs(i, j + 1, height, ocean);
        return;
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        vector<vector<int>> ans;
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<bool>> pacific(n + 1, vector<bool>(m + 1, false));
        vector<vector<bool>> atlantic(n + 1, vector<bool>(m + 1, false));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 || j == 0)
                    dfs(i, j, heights, pacific);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == n - 1 || j == m - 1)
                    dfs(i, j, heights, atlantic);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (atlantic[i][j] == true && pacific[i][j] == true)
                    ans.push_back({i, j});
            }
        }
        return ans;
    }
};
int main(){
    Solution solution;
    vector<vector<int>> heights = {
        {1, 2, 2, 3, 5},
        {3, 2, 3, 4, 4},
        {2, 4, 5, 3, 1},
        {6, 7, 1, 4, 5},
        {5, 1, 1, 2, 4}
    };

    vector<vector<int>> result = solution.pacificAtlantic(heights);

    cout << "Points that can reach both the Pacific and Atlantic Oceans:" << endl;
    for (const vector<int>& point : result) {
        cout << "[" << point[0] << ", " << point[1] << "]" << endl;
    }

    return 0;
}
