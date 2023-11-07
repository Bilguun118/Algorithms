#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void ReverseArr(vector<int>& gridElement, int start, int end) {
    while (start < end) {
        int temp = gridElement[start];
        gridElement[start] = gridElement[end];
        gridElement[end] = temp;
        start++;
        end--;
    }
}

void flipAndInvertImage(vector<vector<int>>& grid) {
    for (int i = 0; i < grid.size(); i++) {
        int n = grid[i].size() - 1;
        ReverseArr(grid[i], 0, n);

        for (int j = 0; j < grid[i].size(); j++) {
            int swap = 0;
            if (grid[i][j] == 1) {
                grid[i][j] = swap;
            } else {
                grid[i][j] = 1;
            }
        }
    }
}


int main() {
    vector<vector<int>>grid;
    grid.push_back(vector<int>{1,1,0});
    grid.push_back(vector<int>{1,0,1});
    grid.push_back(vector<int>{0,0,0});
    vector<vector<int>>result;
    flipAndInvertImage(grid);
    return 0;
}