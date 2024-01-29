#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    // BRUTE FORCE APPROACH SLOW
    int n = arr.size();
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            cout << "PAIRS: " << arr[i] << " : " << arr[j] << "\n";
            ans = min(ans, abs((arr[i] - arr[j])));
        }
    }
    return ans;
}

int minimumAbsoluteDifferenceOptimized(vector<int> arr) {
    // SORT AND GET MIN ABS VAL FASTER
    int n = arr.size();
    int ans = INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i = 1; i < n; i++) {
        cout << "PAIRS: " << arr[i] << " : " << arr[i-1] << "\n";
        ans = min(ans, abs((arr[i] - arr[i-1])));
    }
    return ans;
}

int main() {
    vector<int> arr = {3, -7, 0}; // sorted -> -7,0,3
    int ans = minimumAbsoluteDifferenceOptimized(arr);
    cout << ans;
    return 0;
}