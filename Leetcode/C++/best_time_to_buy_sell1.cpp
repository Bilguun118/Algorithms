#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxProfit1(vector<int>&prices) {
    int maxprofit = 0;
    int i = 0;
    int j = 1;
    while(j < prices.size()) {
        if (prices[i] < prices[j]) {
            maxprofit = max(maxprofit, prices[j] - prices[i]);
        } else {
            i=j;
        }
        j++;
    }
    return maxprofit;
}
int main() {
    vector<int>prices = {7,1,5,3,6,4};
    int ans;
    ans = maxProfit1(prices);
    cout << ans << "\n";
    return 0;
}