#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;


int find_element_percentage(vector<int>arr) {
    unordered_map<int, int>freq;
    int m = arr.size();
    for(int i = 0; i < m; i++) {
        freq[arr[i]]++;
    }
    pair<int, int>ans(arr[0], freq[arr[0]]);
    int max_freq = 0;
    for(const auto& j: freq) {
        int percentage = (static_cast<double>(j.second )/ m * 100);
        if (percentage > ans.second) {
            ans.first = j.first;
            ans.second = percentage;
        } 
    }
    return ans.first;
}


int main() {
    vector<int>arr;
    int n, ans;
    cin >> n;
    while(n--) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    ans = find_element_percentage(arr);
    return 0;
}