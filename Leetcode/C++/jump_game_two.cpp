#include<iostream>
#include<vector>

using namespace std;

int jump(vector<int>& nums, vector<int>& dp, int current_pos) {
    if(current_pos >= nums.size() - 1) return 0;
    if (dp[current_pos] != 10001) return dp[current_pos];
    for(int i = 1; i <= current_pos; i++) {
        dp[current_pos] = min(dp[current_pos], 1+jump(nums, dp, current_pos + i));
    }
    return dp[current_pos];
}

int main() {
    vector<int>nums = {2,3,1,1,4};
    return 0;
}