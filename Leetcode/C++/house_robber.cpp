#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int rob_the_houses(vector<int>nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return nums[0];
    }
    vector<int>dp(n, -1);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for(int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        cout << "IND: " <<dp[i] << endl;
    }
    for(int j = 0; j < dp.size(); j++) {
        cout << "PRINTING: " << dp[j] << endl;
    }
    return dp[n-1];
}


int main() {
    vector<int>houses;
    int n, ans;
    cin >> n;
    while (n--) {
        int temp;
        cin >> temp;
        houses.push_back(temp);
    }
    ans = rob_the_houses(houses);
    cout << "FINAL ANSWER: " << ans << endl;
    return 0;
}