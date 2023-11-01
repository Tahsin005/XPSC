#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i,int j,int initialcolor,int newcolor,vector<vector<int>>& image){
        int n = image.size();
        int m = image[0].size();
        if(i < 0 || j < 0) return;
        if(i >= n || j >= m) return;
        if(image[i][j] != initialcolor) return;

        image[i][j] = newcolor;
        dfs(i, j - 1,initialcolor,newcolor,image);
        dfs(i, j + 1,initialcolor,newcolor,image);
        dfs(i - 1, j,initialcolor,newcolor,image);
        dfs(i + 1, j,initialcolor,newcolor,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor = image[sr][sc];
        if(initialcolor != color){
            dfs(sr,sc,initialcolor,color,image);
        }
        return image;
    }
};
int main(){
    /*Flood fill leetcode : https://leetcode.com/problems/flood-fill/description/ */
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
    for(auto& row : result){
        for(int pixel : row){
            cout<<pixel<<" ";
        }
        cout<<endl;
    }

    return 0;
}