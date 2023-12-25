#include<iostream>
#include<vector>

using namespace std;

vector<bool>kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n = candies.size();
    int maxv = 0;
    vector<bool>ans(n, false);
    for(int i = 0; i < n; i++) {
        if(maxv < candies[i]) maxv = candies[i];
    }
    for(int j = 0; j < n; j++) {
        if(candies[j] >= maxv) ans[j] = true;
    }
    return ans;
}

int main() {
    return 0;
}