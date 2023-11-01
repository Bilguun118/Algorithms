#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    unordered_map<int, int>ans;
    unordered_map<int, int>ans_2;
    for(int i = 0; i < 3; i++) {
        int l1,l2;
        cin >> l1 >> l2;
        ans[l1]++;
        ans_2[l2]++;
    }
    for(auto j: ans) {
        if(j.second < 2) {
            cout << j.first << " ";
        }
    }
        for(auto z: ans_2) {
        if(z.second < 2) {
            cout << z.first << " ";
        }
    }
    return 0;
}