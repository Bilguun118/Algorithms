#include<iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    vector<int>postfx(n);
    vector<int>prefx(n);
    postfx[n-1] = nums[n-1];
    prefx[0] = nums[0];
    int j = 0;
    for(int i = 1; i < n; i++) {
        j = n - i - 1;
        prefx[i] = prefx[i-1] + nums[i];
        postfx[j] = postfx[j+1] + nums[j];
    }
    // prefix sum 
    for(int i = 0; i < n; i++) {
        cout << "PREFIX SUM: "<< prefx[i] << "\n";
    }
    // postfix array
    for(int i = 0; i < n; i++) {
        cout << "POSTFIX SUM: "<< postfx[i] << "\n";
    }
    for(int i = 0; i < n; i++) {
        if(prefx[i] == postfx[i]) return i;
    }
    return -1;
}

int main() {
    vector<int>nums = {2,1,-1};
    int ans = pivotIndex(nums);
    cout << "ANS: " << ans << "\n";
    return 0;
}