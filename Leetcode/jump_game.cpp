#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int>& nums) {
    bool canjump = false;
    for(int i = 0; i < nums.size();) {
        i += nums[i];
        cout << "THE INITIAL POSITION IS: " << i << "\n";
    } 
    return canjump;
}

int main() {
    vector<int>nums = {2,3,1,1,4};
    bool ans;
    ans = canJump(nums);
    return 0;
}