#include <iostream>
#include <vector>

using namespace std;


int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    for(int i = 0; i < prices.size(); i++) {
        if(prices[i] < prices[i+1] && i+1 < prices.size()) {
            maxprofit += prices[i+1] - prices[i];
        }
    }
    return maxprofit;        
}


int main() {
    vector<int>prices = {1};
    int ans;
    ans = maxProfit(prices);
    cout << ans << "\n";
    return 0;
}