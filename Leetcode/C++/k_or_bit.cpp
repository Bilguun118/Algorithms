#include<iostream>
#include<vector>

using namespace std;


int findKor(vector<int> nums, int k) {
    int res = 0;
    int counter = 0;
    while(counter < 32) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            count += nums[i] >> counter & 1; 
        }
        if (count >= k) {
            res |= (1 << counter);  
        }
        counter++;
    }
    return res;
}

int main() {
    int k = 4;
    vector<int>nums = {
        7,12,9,8,9,15
    };
    int ans = findKor(nums, k);
    cout << ans;
    return 0;
}