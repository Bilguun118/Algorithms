// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector<int> lgDivSubSet(int n, vector<int>& nums, vector<int>& subset) {
    subset.push_back(nums[n]);
    for(int i = n; i < nums.size(); i++) {
        if (nums[n] % nums[i] == 0) {
            return lgDivSubSet(i, nums, subset);
        }
    }
    return subset;
}


int main() {
    vector<int> nums = {
        1,2,4,8
    };
    vector<int>subset;
    vector<vector<int>>subsets;
    vector<vector<int>>res;
    
    for(int i = 0; i < nums.size(); i++) {
        subset = lgDivSubSet(0, nums, subset);
        subsets.push_back(subset);
    }
    for(int i = 0; i < subsets.size(); i++) {
        for (int j = 0; j < subsets[i].size(); j++) {
            cout << "SUBSET: " << subsets[i][j] << endl;
        }
    }
    return 0;
}