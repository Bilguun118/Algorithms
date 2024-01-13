#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


int equalPairsBruteForce(vector<vector<int>>grid) {
    int n = grid.size();
    int ans = 0;
    unordered_map<string, int>memRow;
    // store all values to hashmap
    for(int i = 0; i < n; i++) {
        string aggr;
        for(int j = 0; j < grid[i].size(); j++) {
            aggr += to_string(grid[i][j]);
        }
        memRow[aggr]++;
    }
    for(int i = 0; i < n; i++) {
        string colVals;
        for(int j = 0; j < grid[i].size(); j++) {
            colVals += to_string(grid[j][i]);
        }
        cout << "THE COLVALS: " << colVals << "\n";
        ans += memRow[colVals];
    }
    return ans;
}


int main() {
    vector<vector<int>>grid = {{11,1},{1,11}};
    vector<vector<int>>grid2 = {{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    int ans = equalPairsBruteForce(grid);
    cout << ans;
    return 0;
}