#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int i = 3;
    vector<vector<char>>tic_tac;
    unordered_map<char, int>keeper;
    while(i--) {
        char move_one, move_two, move_th;
        cin >> move_one >> move_two >> move_th;
        tic_tac.push_back({move_one, move_two, move_th});
    }
    if(tic_tac[0][0] == tic_tac[1][1] == tic_tac[2][2]) {
        cout << "Left diagonal is same element\n";
    }
    if(tic_tac[0][2] == tic_tac[1][1] == tic_tac[2][0]) {
        cout << "Right diagonal is same element\n";
    }
    if(tic_tac[0][0] == tic_tac[0][1] == tic_tac[0][2]) {
        cout << "Found ans: " << tic_tac[0][1] << "\n";
    }
    int rows = tic_tac.size();
    for(int j = 0; j < rows; j++) {
        for(int k = 0; k < tic_tac[j].size(); k++) {
            cout << tic_tac[j][k] << "\n";
        }
    }
    return 0;
}

