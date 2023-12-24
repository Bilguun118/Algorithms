#include<iostream>
#include<vector>

using namespace std;

int candy(vector<int>kids) {
    int n = kids.size();
    int ans = 0;
    vector<int>candies(n, 1);
    for(int i = 1; i < n; i++) {
        if(kids[i] > kids[i-1]) candies[i] = candies[i-1] + 1;
    }
    for(int j = kids.size() - 2; j >= 0; j--) {
        if(kids[j] > kids[j+1]) candies[j] = max(candies[j], candies[j+1] + 1);
    }
    for(int i = 0; i < candies.size(); i++) {
        ans += candies[i];
    }
    return ans;
}

int main() {
    vector<int>kids = {1,0,2};
    int ans = candy(kids);
    cout << ans;
    return 0;
}