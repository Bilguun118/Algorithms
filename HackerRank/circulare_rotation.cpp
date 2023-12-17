#include<iostream>
#include<vector>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    k %= n;
    int j = 0;
    vector<int>temp(n);
    for(int i = n-k; i < n; ++i, ++j) {
        cout << a[i] << "\n";
        temp[j] = a[i];
    }
    for(int i = 0; i < n-k; ++i, ++j) {
        temp[j] = a[i];
    }
    for(int q = 0; q < temp.size(); q++) {
        cout << temp[q] << "\n";
    }
    return temp;
}

// [1,2,3] -> 2.3.1

int main() {
    int k = 2;
    vector<int>a={1,2,3};
    vector<int>queries={1,2};
    vector<int> ans = circularArrayRotation(a,k,queries);
    return 0;
}