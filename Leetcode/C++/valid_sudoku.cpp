#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
#include<Cmath> 

using namespace std;

bool isValidSudoku(vector<vector<char>>board) {
    for(int i = 0; i < board.size(); i++) {
        set<char>row_memo;
        set<char>col_memo;
        set<char>box_memo;
        for(int j = 0; j < board[i].size(); j++) {
            char boxchar = board[3 * floor(i / 3) + floor(j / 3)][((i * 3) % 9) + (j % 3)];
            if (board[i][j] != '.') {
                // for count rows of unique element
                if(row_memo.count(board[i][j])) return false;
                else row_memo.insert(board[i][j]);
            }
            
            if(board[j][i] != '.') {
                // for count column of unique items
                if(col_memo.count(board[j][i])) return false;
                else col_memo.insert(board[j][i]);
            }

            if(boxchar != '.') {
                // for count of 3x3 grid of sudoku
                if(box_memo.count(boxchar)) return false;
                else box_memo.insert(boxchar);
            }

        }
    }
    return true;
}

int main() {
    vector<vector<char>>grid = {
        {'5','3','.','.','7','.','.','3','.'}
        ,{'6','.','.','1','9','5','.','.','.'}
        ,{'.','9','8','.','.','.','.','6','.'}
        ,{'8','.','.','.','6','.','.','.','3'}
        ,{'4','.','.','8','.','3','.','.','1'}
        ,{'7','.','.','.','2','.','.','.','6'}
        ,{'.','6','.','.','.','.','2','8','.'}
        ,{'.','.','.','4','1','9','.','.','5'}
        ,{'.','.','.','.','8','.','.','7','9'}};
    bool ans = isValidSudoku(grid);
    cout << ans;
    return 0;
}