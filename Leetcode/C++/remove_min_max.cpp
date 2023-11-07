#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void minimumDeletions(vector<int>&nums) {
    map<int, int>memo;
    int max = 0;
    int min = nums[0];
    int max_idx = 0;
    int min_idx = 0;
    // Find Min and Max
    for(int i = 0; i < nums.size(); i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] == max) {
            max_idx = j;
        }
        if (nums[j] == min) {
            min_idx = j;
        }
    }
    cout << "MAX: " << max_idx << "MIN: " << min_idx << endl;
}
 


int main() {
    vector<int>nums = {
        2,10,7,5,4,1,8,6
    };
    minimumDeletions(nums);
    return 0;
}