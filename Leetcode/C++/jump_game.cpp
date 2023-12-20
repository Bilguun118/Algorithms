#include <iostream>
#include <vector>

using namespace std;

bool canJumpRc(int current_pos, vector<int>& nums) {
    if(current_pos == nums.size()-1) return true;
    if(nums[current_pos] == 0) return false;
    int reach_point = current_pos + nums[current_pos];
    for(int i = current_pos+1; i <= reach_point; i++) {
        if(i < nums.size() && canJumpRc(i, nums)) return true;
    }
    return false;
}

bool canJumpTopToBottom(int current_pos, vector<int>& nums, vector<int>& dp) {
    if(current_pos == nums.size()-1) return true;
    if(nums[current_pos] == 0) return false;

    if(dp[current_pos] != -1) return dp[current_pos];
    int reach_point = current_pos + nums[current_pos];
    for(int i = current_pos+1; i <= reach_point; i++) {
        if(i < nums.size() && canJumpRc(i, nums)) return dp[current_pos] = true;
    }
    return dp[current_pos] = false;
}

int main() {
    vector<int>nums = {2,3,1,1,4};
    bool ans;
    vector<int>dp(nums.size(), -1);
    ans = canJumpTopToBottom(0, nums, dp);
    cout << ans;
    return 0;
}