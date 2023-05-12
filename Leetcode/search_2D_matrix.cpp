#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void search_two_d_matrix(vector<vector<int>>& grid, int target) {
    for (int i = 0; i < grid.size(); i++) {
        int high_point = grid[i].size();
        int low_point = 0;
        while(low_point <= high_point) {
            int midpoint = low_point + (high_point - low_point ) / 2;
            if (grid[i][midpoint] == target) {
                // Found item
                cout << "FOUND ITEM: " << grid[i][midpoint] << endl;
                return;
            }

            if (grid[i][midpoint] < target) {
                // Increase Lower Bound
                low_point = midpoint + 1;
            }

            if (grid[i][midpoint] > target) {
                high_point = midpoint - 1;   
            }
        }
    }
    return;
}

int main() {
    vector<vector<int>> grid;
    int target = 16;
    grid.push_back(vector<int>{1,3,5,7});
    grid.push_back(vector<int>{10,11,16,20});
    grid.push_back(vector<int>{23,30,34,60});
    search_two_d_matrix(grid, target);
    return 0;
}