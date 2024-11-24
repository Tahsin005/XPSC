#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs (int i, int j, int initialColor, int newColor, vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();
        if (i < 0 or j < 0) return;
        if (i >= n or j >= m) return;
        if (image[i][j] != initialColor) return;

        image[i][j] = newColor;
        dfs(i, j - 1, initialColor, newColor, image);
        dfs(i, j + 1, initialColor, newColor, image);
        dfs(i - 1, j, initialColor, newColor, image);
        dfs(i + 1, j, initialColor, newColor, image);
    }
    vector<vector<int>> floodFill (vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        if (initialColor != color) {
            dfs(sr, sc, initialColor, color, image);
        }
        return image;
    }
};
int main(){
    /* Flood fill leetcode : https://leetcode.com/problems/flood-fill/description/ */
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    int sr = 1;  // Starting row
    int sc = 1;  // Starting column
    int newColor = 2;  // New color to fill

    Solution solution;
    vector<vector<int>> result = solution.floodFill(image, sr, sc, newColor);

    // Printing the result
    for (auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}