#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;


int hourglassSum(vector<vector<int>> arr) {
    // 6x6 guaranteed
    int ans = INT_MIN;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int current = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            ans = max(ans, current);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>>arr = {{1, 1, 1, 0, 0, 0},{0, 1, 0, 0, 0, 0},{1, 1, 1, 0, 0, 0},{0, 0, 2, 4, 4, 0},{0, 0, 0, 2, 0, 0},{0, 0, 1, 2, 4, 0}};
    int ans = hourglassSum(arr);
    cout << ans;
    return 0;
}