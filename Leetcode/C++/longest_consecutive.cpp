#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int findLongestConsecutive(vector<int>nums) {
    if(nums.size() == 1) {
        return 1;
    }
    if(nums.size() == 0) {
        return 0;
    }
    sort(nums.begin(), nums.end());
    queue<int>qt;
    qt.push(nums[0]);
    int count = 0;
    int ans = 0;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == qt.front()) {
            qt.pop();
            qt.push(nums[i]);
            continue;
        }
        if(nums[i] - qt.front() == 1) {
            count++;
        } else {
            count = 0;
        }
        ans = max(ans, count);
        qt.pop();
        qt.push(nums[i]);
    }
    return ans;
}


int main() {
    vector<int>nums = {
        0,3,7,2,5,8,4,6,0,1
    };
    int ans = findLongestConsecutive(nums);
    cout << ans+1 << "\n";
    return 0;
}