#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>

using namespace std;

vector<int>topKFrequent(vector<int>& nums, int k) {
    vector<int>ans;
    unordered_map<int, int>freq;
    priority_queue<pair<int, int>>qt;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }
    for(auto j: freq) {
        pair<int, int>each;
        each.first = j.second;
        each.second = j.first;
        qt.push(each);
    }
    while(k--) {
        ans.push_back(qt.top().second);
        qt.pop();
    }
    return ans;
}


int main() {
    vector<int>nums = {1,1,1,1,2,2,3};
    vector<int>res;
    res = topKFrequent(nums, 2);
    return 0;
}