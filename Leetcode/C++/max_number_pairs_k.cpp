#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int maxOperations(vector<int>nums, int k) {
    unordered_map<int, int>mem;
    int n = nums.size();
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(mem[k - nums[i]] > 0) {mem[k - nums[i]]--; ans++;}
        else mem[nums[i]]++;
    }
    return ans;
}

int main() {
    vector<int>nums = {1,2,3,4};
    int ans = maxOperations(nums, 5);
    cout << ans;
    return 0;
}