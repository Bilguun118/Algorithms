#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;



int islandPerimitier(vector<vector<int>>& grid, int row, int col) {
    if(row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == 0) return 1;
    if (grid[row][col] == -1) return 0;
    grid[row][col] = -1;
    int perimiter = islandPerimitier(grid, row+1, col);
    perimiter += islandPerimitier(grid, row, col+1);
    perimiter += islandPerimitier(grid, row-1, col);
    perimiter += islandPerimitier(grid, row, col-1);
    return perimiter;
}


int main() {
    vector<int> a = {0,1,0,0};
    vector<int> b = {1,1,1,0};
    vector<int> c = {0,1,0,0};
    vector<int> d = {1,1,0,0};
    vector<vector<int>>grid;
    grid.push_back(a);
    grid.push_back(b);
    grid.push_back(c);
    grid.push_back(d);
    int ans = 0;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++) {
            if(grid[i][j] == 1) {
                ans = islandPerimitier(grid, i, j);
            }
        }
    }
    return 0;
}