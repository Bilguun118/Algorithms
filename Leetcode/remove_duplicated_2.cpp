#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void removeDuplicates(vector<int>& nums) {
    int nextn = 1;
    int count_dup = 0;
    int count_element = 1;
    int length = 0; 
    while(nextn < nums.size()) {
        if(nums[nextn] == nums[nextn - 1]) {
            if (count_element < 2) {
                count_element++;
                length++;
                nums[length] = nums[nextn];
            }
        } else {
            count_element = 1;
            length++;
            nums[length] = nums[nextn];
        }    
        nextn++;
    }
}

int main() {
    vector<int>nums = {
        1,1,1,2,2,3
    };
    removeDuplicates(nums);
    return 0;
}