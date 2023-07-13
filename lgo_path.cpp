// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;


int mostProfitAssign(vector<int>& difficulty, vector<int>& profit, vector<int>& worker, map<int, int>& memo) {
    int counter = 0;
    for (int i = 0; i < profit.size(); i++) {
        memo[difficulty[i]] = profit[i];
    }
    int w = 0;
    while (w < worker.size()) {
        int max_profit_for_w = 0;
        int capacity_of_curr_w = worker[w];
        for  (auto j: memo) {
            if (j.second > max_profit_for_w && j.first <= capacity_of_curr_w) {
                max_profit_for_w = j.second;
                // min_diff_work = j.first;
            }
        }
        cout << "MAX PROFIT FOPR W: " << max_profit_for_w << endl;
        // cout << "MIN DIFFICULTY FOR W: " << min_diff_work << endl;
        cout << "Current WORKER: " << worker[w] << endl;
        counter += max_profit_for_w;
        w++;
    }
    return counter;
}


void mostProfitAssignT(vector<int>& difficulty, vector<int>& profit, vector<int>& worker, map<int, int>& memo) {
    for (int i = 0; i < worker.size(); i++) {
        // DoBinSearch()
    }
}

void DoBinSearch() {

}



int main() {
    vector<int> difficulty={66,1,28,73,53,35,45,60,100,44,59,94,27,88,7,18,83,18,72,63};
    
    vector<int> profit={66,20,84,81,56,40,37,82,53,45,43,96,67,27,12,54,98,19,47,77};

    vector<int>worker={61,33,68,38,63,45,1,10,53,23,66,70,14,51,94,18,28,78,100,16};
    map<int, int> memo;
    int n = difficulty.size();
    int m = profit.size(); 
    int profits;
    profits = mostProfitAssign(difficulty, profit, worker, memo);
    cout << profits << endl;
    return 0;
}