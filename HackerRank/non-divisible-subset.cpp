#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



void nonDivisibleSubset(vector<int>& arr, vector<vector<int>>& result, int idx) {
    if (idx == arr.size() - 1) {
        result.push_back({});
        result.push_back({arr[idx]});
    } else {
        nonDivisibleSubset(arr, result, idx+1);
        int n = result.size();
        for (int i = 0; i < n; i++) {
            vector<int> temp = result[i];
            temp.push_back(arr[idx]);
            result.push_back(temp);
        }
    }
}


int main() {
    // Find Subset of an Array
    vector<int> arr = {
        1,7,2,4
    };
    vector<vector<int>>result;
    nonDivisibleSubset(arr, result, 0);
    // int k = 3;
    return 0;
}