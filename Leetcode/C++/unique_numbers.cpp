#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;


bool uniqueOccurrences(vector<int>& arr) {
    bool ans = false;
    unordered_map<int, int>freq;
    int n = arr.size();
    unordered_set<int>vfreq;
    int count = 0;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for(auto j: freq) {
        vfreq.insert(j.second);
    }
    return vfreq.size() == freq.size();
}

int main(){
    vector<int>arr = {1,2,2,1,1,3};
    bool ans = uniqueOccurrences(arr);
    cout << ans;
    return 0;
}