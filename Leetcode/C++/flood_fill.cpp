#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>&grid, int sc, int sr, int color, int fill_color) {
    if(sr < 0 || sc < 0 || sr >= grid.size() || sc >= grid[0].size() || grid[sr][sc] != color) {
        return;
    }
    grid[sr][sc] = fill_color;
    dfs(grid, sc+1, sr, color, fill_color);
    dfs(grid, sc-1, sr, color, fill_color);
    dfs(grid, sc, sr+1, color, fill_color);
    dfs(grid, sc, sr-1, color, fill_color);
}

vector<vector<int>> floodFill(vector<vector<int>>& grid, int sc, int sr, int color) {
    if(color == sc) {
        return grid;
    }
    dfs(grid, sc, sr, grid[sr][sc], color);
    return grid;
}

int main() {
    vector<vector<int>>grid = {{1,1,1},{1,1,0},{1,0,1}};
    vector<vector<int>>ans;
    int sr = 1;
    int sc = 1;
    int color = 2;
    ans = floodFill(grid, sc, sr, color);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << "\n";
        }
    }
    return 0;
}