#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> arr(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        // Initialize the dynamic programming table with the first row
        vector<vector<int>> dp(n, vector<int>(n));
        dp[0][0] = arr[0][0];

        // Compute the dynamic programming table
        for (int i = 1; i < n; i++) {
            dp[i][0] = max(dp[i - 1][0] + arr[i][0], dp[i - 1][0] - arr[i][0]);
            dp[0][i] = max(dp[0][i - 1] + arr[0][i], dp[0][i - 1] - arr[0][i]);
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = max(
                    max(dp[i - 1][j] + arr[i][j], dp[i - 1][j] - arr[i][j]),
                    max(dp[i][j - 1] + arr[i][j], dp[i][j - 1] - arr[i][j])
                );
            }
        }

        // The maximum sum is the last element in the dynamic programming table
        int maxSum = dp[n - 1][n - 1];
        cout << maxSum << endl;
    }

    return 0;
}
