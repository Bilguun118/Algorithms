#include<iostream>
#include<vector>

using namespace std;

int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int xored = 0; 
    int ans = 0;
    int lenNt = nums2.size();
    for(int i = 0; i < lenNt; i++) {
        xored ^= nums2[i];
    }

    for(int j = 0; j < nums1.size(); j++) {
        if(lenNt % 2 == 1) ans ^= nums1[j] ^ xored;
        else ans ^= xored;
    }
}

int main() {
    vector<int>nums1 = {2,1,3};
    vector<int>nums2 = {10,2,5,0};
    int ans = xorAllNums(nums1, nums2);
    cout << ans;
    return 0;
}