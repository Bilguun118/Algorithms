#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int naiveApproach(vector<int>lineup) {
    int ans = 0;
    int n = lineup.size();
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    int countMax = 0, countMin = 0;
    for(int i = 0; i < n; i++) {
        maxNum = max(maxNum, lineup[i]);
        minNum = min(minNum, lineup[i]);
    }
    for(int i = 0; i < n; i++) {
        // in this case we need to only search max num
        if(lineup[i] == maxNum) break;
        countMax++;
    }
    for(int i = n-1; i >= 0; i--) {
        // in this case we need to search min num
        if(lineup[i] == minNum) break;
        countMin++;
    }
    ans = countMax + countMin;
    return ans;
}

int secondApproach(vector<int>lineup) {
    int ans = 0;
    int n = lineup.size();
    int maxNum = INT_MIN;
    int minNum = INT_MIN;
    int maxIndex = 0;
    int minIndex = 0;

    // Determine Max and Min nums and index
    for(int i = 0; i < n; i++) {
        if(lineup[i] > maxNum) {
            maxNum = lineup[i];
            maxIndex = i;
        }

        if(lineup[i] <= minNum) {
            minNum = lineup[i];
            minIndex = i;
        }
    }
    cout << maxIndex + (n - 1 + minIndex) - (minIndex < maxIndex ? 1: 0) << "\n";
}


int main() {
    int n;
    vector<int>lineup;
    cin >> n;
    while(n--) {
        int h;
        cin >> h;
        lineup.push_back(h);
    }
    int ans = secondApproach(lineup);
    cout << ans;
    return 0;
}