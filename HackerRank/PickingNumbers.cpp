#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int pickingNumbers(vector<int>a) {
    sort(a.begin(), a.end());
    int length = 0, left = 0, freq = 1;
    for (int idx = 1; idx < a.size(); idx++){
        if(a[idx] - a[left] >= 2) {
            freq = 1;
            length = max(length, idx-left);
            left = idx;
        } else {
            freq++;
        }
    }
    return max(length, freq);
}

int main() {
    vector<int> a;
    for (int i = 0; i < a.size(); i++) {
        int nums;
        cin >> nums;
        a.push_back(nums);
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}