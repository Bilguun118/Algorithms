#include<iostream>
#include<vector>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
    int left = 0, right = 0, ans = 0, zero = 0;
    while(right < n) {
        if(nums[right] == 0) zero++;
        while(zero > k) {
            if(nums[left] == 0) zero--;
            left++;
        }
        ans = max(ans, right - left + 1);
        right++;
    }
    return ans;
}

int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0}; 
    int k = 2;
    int ans = longestOnes(nums, k);
    cout << ans;
    return 0;
}