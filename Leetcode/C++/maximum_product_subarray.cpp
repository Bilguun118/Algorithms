#include <iostream>
#include <vector>

using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProduct = 0;
    int j = 1;
    while(j < nums.size()) {
        if (nums[j-1] == 0) {
            nums[j-1] = 1;
        }
        if (nums[j] == 0) {
            nums[j] = 1;
        }
        nums[j] *= nums[j-1];
        maxProduct = max(maxProduct, nums[j]);
        j++;
    }
    return maxProduct;
}

int main() {
    vector<int>nums = {2,3,-2,4};
    vector<int>nums2 = {0,2};
    int ans = maxProduct(nums);
    cout << ans << "\n";
    return 0;
}