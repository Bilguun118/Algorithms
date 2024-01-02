#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

bool increasingTriplet(vector<int>nums) {
    int n = nums.size();
    int small = INT_MAX, mid=INT_MAX;
    for(int i = 0; i < n; i++) {
        if(nums[i] <= small) {small = nums[i];}
        else if (nums[i] <= mid) {mid = nums[i];}
        else return true;
    }
    return false;
}

int main() {
    vector<int>nums = {20,100,10,12,5,13};
    bool ans = increasingTriplet(nums);
    cout << ans;
    return 0;
}