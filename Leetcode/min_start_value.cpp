#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


int minStartVal(vector<int> nums) {
    int max_neg_val = 0;
    int minV = 0;
    for (int i = 0; i < nums.size(); i++) {
        max_neg_val += nums[i];
        minV = min(minV, max_neg_val);
        cout << minV << endl;
        cout << "MAX NEGATIVE VALUE: " << max_neg_val << endl;
    }
    return 1-minV;
}



int main() {
    int n, ans;
    vector<int> nums;
    cin >> n;
    while(n--) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    ans = minStartVal(nums);
    cout << "ANS: " << ans << endl;
    return 0;
}