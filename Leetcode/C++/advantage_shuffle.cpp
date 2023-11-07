#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


void advantageShuffle(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    if (n > m || n < m ) {
        cout << "TWO ARR SHOULD BE SAME SIZE" << endl;
        return;
    }

    // Store Original indexes of nums2
    map<int, queue<int>>trace;
    for (int i = 0; i < m; i++) {
        trace[nums2[i]].push(i);
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int jdx = 0;
    int idx = 0;
    vector<int>ans(n, -1);
    queue<int>unused;
    while(idx < n && jdx < n) {
        if (nums1[idx] > nums2[jdx]) {
            int indx = trace[nums2[jdx]].front();
            trace[nums2[jdx]].pop();
            ans[indx] = nums1[idx];
            jdx++;
        } else {
            unused.push(nums1[idx]);
        }
        idx++;
    }
    for (int i = 0; i < n; i++) {
        if(ans[i] == -1) {
            ans[i] = unused.front();
            unused.pop();
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return;
}


int main() {
    vector<int>nums1 = {
        12,24,8,32,15
    };
    vector<int>nums2 = {
       13,25,32,11,32
    };
    advantageShuffle(nums1, nums2);
    return 0;
}