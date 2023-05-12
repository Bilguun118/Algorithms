#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

void SearchBFS(int current_row, int current_col, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    // Boundary Check For All Row and Col
    if (current_row < 0 || current_row >= grid.size() || current_col < 0 || current_col >= grid[0].size()) {
        return;
    }
    if (visited[current_row][current_col] || grid[current_row][current_col] == '0') {
        return;
    }
    visited[current_row][current_col] = true;
    SearchBFS(current_row + 1, current_col, grid, visited);
    SearchBFS(current_row, current_col + 1, grid, visited);
    SearchBFS(current_row - 1, current_col, grid, visited);
    SearchBFS(current_row, current_col - 1, grid, visited);
}

void numsIslands(vector<vector<char>> grid) {
    int res = 0;
    queue<string> q;
    int total_row = grid.size();
    int total_col = grid[0].size();
    // Creates 2D Vector of Boolean Like Grid Input
    vector<vector<bool>> visited(total_row, vector<bool>(total_col, false));
    for (int row = 0; row < total_row; row++) {
        for (int col = 0; col < total_col; col++) {
            if(grid[row][col] == '1' && !visited[row][col]) {
                res++;
                SearchBFS(row, col, grid, visited);
            }
        }
    }
    cout << "RES IS: " << res << endl;
}


int main() {
    vector<vector<char>> grid;
    grid.push_back(vector<char>{'1','1','0','0','0'});
    grid.push_back(vector<char>{'1','1','0','0','0'});
    grid.push_back(vector<char>{'0','0','1','0','0'});
    grid.push_back(vector<char>{'0','0','0','1','1'});
    numsIslands(grid);
    return 0;
}