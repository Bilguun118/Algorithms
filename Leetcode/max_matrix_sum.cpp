#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

void max_matrix_sum(vector<vector<int>>&nums) {
    int count_smaller_elements = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int keeper = n-1;
        // Horizontally scanning
        for (int j = 0; j < nums[i].size(); j++) {
            if (nums[i][j] < 0) {
                count_smaller_elements++;
            }
        }
    }
    if (count_smaller_elements % 2 == 0) {
        
    }
    cout << count_smaller_elements << endl;
}

int main() {
    vector<vector<int>>nums = {
        {1,-1},
        {-1,1}
    };
    max_matrix_sum(nums);
    return 0;
}