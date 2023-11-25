#include<iostream>
#include<vector>

using namespace std;

vector<int> findAbsDifferenceNaive(vector<int>& nums) {
    vector<int>res;
    for(int i = 0; i < nums.size(); i++) {
        int ans = 0;
        for(int j = 0; j < nums.size(); j++) {
            ans += abs(nums[i]-nums[j]);
        }
        res.push_back(ans);
    }
    return res;
}

vector<int> findAbsDifferenceEfficient(vector<int>& nums) {
    // uses prefix sum for an array postfix
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    int left = 0;
    int right = sum;
    vector<int>res(nums.size(), 0);
    for(int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        right -= n;
        res[i] = n * i - left + right - n * (nums.size() - i - 1);
        left+=n;
    }
    return res;
}

int main() {
    vector<int>nums = {2,3,5};
    vector<int> result;
    result = findAbsDifferenceEfficient(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
    return 0;
}