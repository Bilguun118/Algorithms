#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void BitwiseAnd(vector<int>&arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    vector<int>arr = {
        1,3,8,48,10
    };
    BitwiseAnd(arr);
    return 0;
}