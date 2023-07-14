#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


void findsubs(vector<int>& nums, vector<vector<int>>& ans, int indx) {
    if (indx == nums.size() - 1) {
        ans.push_back({});
        ans.push_back({nums[indx]});
        return;
    } else {
        // call rec
        findsubs(nums, ans, indx+1);
        int n = ans.size();
        // for(int i = 0; i < n; i++) {

        // }
    }
}

int main() {
    vector<int> nums = {
        1,2,2
    };

    findsubs(nums, 0);
    return 0;
}