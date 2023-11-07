#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int findDuplicateVal(vector<int>nums) {
    int n = nums.size();
    map<int, int>freq;
    for(int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }
    for (auto i = freq.begin(); i != freq.end(); i++) {
        if (i->second > 1) {
            return i->first;
        }
    }
    return 0;
}


int main() {
    vector<int>nums = {
        1,3,4,2,2
    };
    int ans;
    ans = findDuplicateVal(nums);
    cout << ans << endl;
    return 0;
}