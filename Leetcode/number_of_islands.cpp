#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;



void numsIslands(vector<vector<char>> grid) {
    map<string, bool>visited;
    queue<string> q;
    int islands;
    // Traverse the 2D Array
    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            string indexKey = to_string(row) + to_string(col);;
            if (grid[row][col] == '1' && !visited[indexKey]) {
                cout << "NOT VISITED ISLAND: " << grid[row][col] << endl;
                // q.push(indexKey);
                visited[indexKey] = true;
                // Depth First Search Here
                islands++;
            }
            // BFS(&q, &visited, grid[row][col], indexKey);
            cout << "INDEX KEY IS: " << indexKey << endl;
            // cout << "VISITED: " << visited << endl;
        }
    }
    cout << islands << endl;
}

// // Does Inline Work
// void BFS(queue<char>*q, map<string, bool> *visited, char crnode, string indexKey ) {
//     q.push(crnode);
//     visited[indexKey] = true;
//     while (!q.empty()) {
//         cout << 
//     }
// }


int main() {
    int res;
    vector<vector<char>> grid;
    grid.push_back(vector<char>{'1','1','1','1','0'});
    grid.push_back(vector<char>{'1','1','0','1','0'});
    grid.push_back(vector<char>{'1','1','0','0','0'});
    grid.push_back(vector<char>{'0','0','0','0','0'});
    
    numsIslands(grid);
    // cout << "res" << endl;
    return 0;
}