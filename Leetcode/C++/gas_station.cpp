#include<iostream>
#include<vector>

using namespace std;

int gasCircular(vector<int>gas, vector<int>cost) {
    int idx = 0;
    int total = 0;
    int gas_total = 0;
    int cost_total = 0;
    for(int i = 0; i < gas.size(); i++) {
        total += (gas[i] - cost[i]);
        gas_total += gas[i];
        cost_total += cost[i];
        if(total < 0) idx = i + 1; total = 0;
    }
    if(cost_total - gas_total < 0) return -1;
    return idx;
}

int main() {
    vector<int>gas;
    vector<int>cost;
    return 0;
}