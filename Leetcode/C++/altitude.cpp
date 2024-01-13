#include<iostream>
#include<vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int ans = 0;
    int def = gain[0];
    int i = 1;
    for(int i = 1; i < n; i++) {
        gain[i] = gain[i - 1] + gain[i];
        ans = max(ans, gain[i]);
    }
    if(def > ans) return def;
    return ans;
}

int main() {
    vector<int>gain = {-4,-3,-2,-1,4,3,2};
    int ans = largestAltitude(gain);
    return 0;
}