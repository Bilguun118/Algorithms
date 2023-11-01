#include <iostream>
#include <cstdlib>
#include <stack>
#include <deque>
#include <vector>
#include <string>

using namespace std;

void make_equal(vector<int>& apples) {
    int n = apples.size();
    if(n == 0 || n == 1) {
        cout << 0 << endl;
        return;
    }
    vector<int>dp(n, 1);
    for(int i = 0; i < n; i++) {
        if(apples[i] > 1) {
            // dp[i] = 1-apples[i] 1 5 1
        }
    }
    return;
}

int main() {
    int TC;
    vector<int>apples;
    cin >> TC;
    while(TC--) {
        // get apples
        int apple;
        cin >> apple;
        apples.push_back(apple);
    }
    make_equal(apples);
    return 0;
}