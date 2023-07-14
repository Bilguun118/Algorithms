#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


void SortColors(vector<int>& nums) {
    int n = nums.size();
    int red = 0;
    int white = 0;
    int blue = 0;
    for(int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            red++;
        } else if (nums[i] == 1) {
            white++;
        } else {
            blue++;
        }
    }
    int idx = 0;
    while (idx < n) {
        if (red > 0) {
            nums[idx] = 0;
            red--;
        } else if (white > 0) {
            nums[idx] = 1;
            white--;
        } else {
            nums[idx] = 2;
            blue--;
        }
        idx++;
    }
    for (int i = 0; i < n; i++) {
        cout << nums[i] << endl;
    }
    return;
}


int main() {
    vector<int>nums = {
        2,0,2,1,1,0
    };
    SortColors(nums);
    return 0;
}