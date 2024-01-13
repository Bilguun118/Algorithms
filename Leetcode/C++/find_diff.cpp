#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;


vector<int> getDistinct(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    unordered_set<int>ans;
    unordered_map<int, bool>mem;
    for(int i = 0; i < n; i++) {
        mem[nums1[i]] = true;
    }
    for(auto j: mem) cout << j.first << " : " << j.second << "\n";
    for(int i = 0; i < nums2.size(); i++) {
        if(!mem[nums2[i]]) {
            ans.insert(nums2[i]);;
        }
    }
    return vector<int> (ans.begin(), ans.end());
}

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    return {getDistinct(nums2, nums1), getDistinct(nums1, nums2)};
}

vector<vector<int>> findDifferenceSet(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>temp2;
    unordered_set<int>st1(nums1.begin(), nums1.end());
    unordered_set<int>st2(nums2.begin(), nums2.end());
    for(int i: st1){
        if(st2.count(i) == 0) {
            temp.push_back(i);
        }
    }
    for(int i: st2) {
        if(st1.count(i) == 0) {
            temp2.push_back(i);
        }
    }
    ans.push_back(temp);
    ans.push_back(temp2);
    return ans;
}

int main() {
    vector<int>nums1 = {1,2,3,3};
    vector<int>nums2 = {1,1,2,2};
    vector<vector<int>>ans = findDifference(nums1, nums2);

    return 0;
}