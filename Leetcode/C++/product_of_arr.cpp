#include<iostream>
#include<vector>

using namespace std;


vector<int> productExceptSelfBrute(vector<int>nums) {
    int n = nums.size();
    vector<int>ans(n, 0);
    for(int i = 0; i < n; i++) {
        int current_sum = 1;
        for(int j = 0; j < n; j++) {
            if(j != i) current_sum *= nums[j]; 
        }
        ans[i] = current_sum;
    }
    return ans;
}

vector<int> productExceptSelf(vector<int>nums) {
    // uses dynamic programming to solve
    int n = nums.size();
    vector<int>ans(n, 0);
    ans[0] = 1;
    for(int i = 1; i < n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }
    int right = 1;
    for(int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }
    return ans;
}

int main() {
    vector<int>nums = {1,2,3,4};
    vector<int>nums2 = {-1,1,0,-3,3};
    vector<int> ans = productExceptSelf(nums2);
    for(int i = 0; i < ans.size(); i++) {
        cout << "THE CURRENT SUM IS: " << ans[i] << "\n";
    }
    return 0;
}