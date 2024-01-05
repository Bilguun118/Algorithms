#include<iostream>
#include<vector>

using namespace std;

bool validMountainArray(vector<int>arr) {
    int n = arr.size();
    int i = 1;
    if(n < 3) return false;
    while(i < n && arr[i] > arr[i-1]) i++;
    if(i == 1 || i == n) return false;
    while(i < n && arr[i] < arr[i-1]) i++;
    return i == n;
}


int main() {
    vector<int>arr = {1,3,2};
    bool ans =  validMountainArray(arr);
    cout << ans;
    return 0;
}