#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
    int ans = 0;
    int n = contests.size();
    int count = 0;
    sort(contests.begin(), contests.end(), [](vector<int>l, vector<int>r) {
        return l[0] > r[0];
    });
    for(int i = 0; i < n; i++){
        // if it is 2 paired element we don't need to iterate over an nested array
        // sort by largest and get largest values first until count reaches k
        if(count < k || contests[i][1] == 0) ans += contests[i][0];
        else ans -= contests[i][0];
        if(contests[i][1] == 1) count++;
    }
    return ans;
}

int main() {
    vector<vector<int>>contest = {{5, 1}, {2, 1}, {1, 1}, {8, 1}, {10, 0}, {5, 0}};
    int k = 3;
    int ans = luckBalance(k, contest);
    cout << ans;
    return 0;
}