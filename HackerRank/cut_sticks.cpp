#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

vector<int> cutTheSticks(vector<int> arr) {
    vector<int>ans;
    int minVal = INT_MAX;
    while(arr.size() > 0) {
        ans.push_back(arr.size());
        for(int i = 0; i < arr.size(); i++) {
            minVal = min(minVal, arr[i]);
            cout << arr[i] << "\n";
        }
        vector<int>temp;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] - minVal > 0) temp.push_back(arr[j]-minVal);
        }
        if(!temp.empty()) ans.push_back(temp.size());
    }
    return ans;
}

vector<int> cutTheSticksIntiutive(vector<int>arr) {
    int n = arr.size();
    vector<int>ans;
    sort(arr.begin(), arr.end());
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            ans.push_back(arr.size() - i);
        }
    }
    return ans;
}

int main() {
    vector<int>arr = {1,2,3};
    vector<int>ans = cutTheSticks(arr);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}