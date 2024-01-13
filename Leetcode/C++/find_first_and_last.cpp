#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    // weird solution
    int n = nums.size();
    vector<int>ans(2, -1);
    if(n == 0) return ans;
    int first = 100000;
    int last = -1;
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            first = min(first, i);
            last = max(last, i);
        }
    }
    ans[0] = first;
    ans[1] = last;
    return ans;
}

vector<int> searchBS(vector<int>& nums, int target) {
    // weird solution
    int n = nums.size();
    vector<int>ans(2, -1);
    if(n == 0) return ans;
    
    return ans;
}

int main() {
    vector<int>nums = {0,0,1,2,2};
    vector<int> ans = searchRange(nums, 2);
    return 0;
}