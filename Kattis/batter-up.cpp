#include <iostream>
#include <vector>

using namespace std;


void batter_up(vector<int>bats) {
    int n = bats.size();
    int keeper = n;
    double strikes = 0;
    double ans;
    for(int i = 0; i < n; i++) {
        if(bats[i] >= 0) {
            strikes+=bats[i];
        } else {
            keeper--;
        }
    }
    ans = strikes / keeper;
    printf("%lf", ans);
    return; 
}

int main() {
    int TC;
    vector<int>bats;
    cin >> TC;
    while(TC--) {
        int temp;
        cin >> temp;
        bats.push_back(temp);
    }
    batter_up(bats);
    return 0;
}