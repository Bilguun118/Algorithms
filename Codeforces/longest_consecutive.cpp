#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int findLongestConsecutive(vector<int>nums) {
    int l = nums.size();
    int ans = 0;
    for(int i = 1; i <= l; i++) {
        vector<bool>freq(l, false);
        int Min, Max;
        Min = nums[i];
        Max = nums[i];
        for(int j = i; j <= l; j++) {
            if (freq[nums[j]]) {
                break;
            }
            freq[nums[j]] = true;
            Min = min(Min, nums[j]);
            Max = max(Max, nums[j]);
            if (j - i == Max - Min) {
                ans = max(ans, j - i + 1);
            }
        }    
    }
    return ans;
}



int main () {
    vector<int>nums;
    int n, res;
    cin >> n;
    while(n--) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    res = findLongestConsecutive(nums);
    cout << res;
    return 0;
}