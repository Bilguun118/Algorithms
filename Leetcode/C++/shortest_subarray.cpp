#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <deque>

using namespace std;

int shortest_subarray_sum_k(vector<int>arr1, int k) {
    int n = arr1.size();
    deque<pair<int, int>> dq;
    long long sum = 0;
    long long shortest = INT_MAX;
    
    for(long long i = 0; i < n ; i++) {
        if (arr1[i] >= k) {
            return 1;
        }
        // Finding all sums from begin to end
        sum += arr1[i];
        // in each iteration we need to save sum and corresponding index val
        if (sum >= k) {
            // i + 1 means distance of current sum from
            shortest = min(shortest, i+1);
        }
        long rem = sum - k;
        
    }
    return -1;
}


int main() {
    vector<int>arr1 = {
        2,-1,2
    };
    int k = 3;
    shortest_subarray_sum_k(arr1, k);
    return 0;
}