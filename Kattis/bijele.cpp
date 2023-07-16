#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void det_bijele(vector<int>bij){
    int n = bij.size();
    int templat[6] ={1,1,2,2,2,8};
    for(int i = 0; i < n; i++) {
        if (bij[i] == templat[i]) {
            bij[i] = 0;
            continue;
        } else {
            bij[i] = templat[i] - bij[i];
        }
    }
    for(auto elem: bij){
        cout << elem << " ";
    }
    return;
}

int main() {
    int TC = 6;
    vector<int>bij;
    while(TC--) {
        int temp;
        cin >> temp;
        bij.push_back(temp);
    }
    det_bijele(bij);
    return 0;
}