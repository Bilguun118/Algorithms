#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::memset;

const int MAX_VALUE = 1e9;
int memo[11][101][101];

int destroyMailBox(int k, int i, int m) {
    if (k == 0) {
        return MAX_VALUE;
    }
    if (k == 1) {
        return (m*(m+1)/2) - (i*(i+1)/2);
    }
    if(k == m) {
        return 0;
    }
    if(memo[k][i][m] == -1){
        int res = MAX_VALUE;
        for(int j = i+1; j <= m; ++j) {
            res = min(res, j+max(destroyMailBox(k-1, i, m-1),destroyMailBox(k, i, m)));
        }
        memo[k][i][m] = res;
    }
    return memo[k][i][m];
}

int destroyMailBoxDP(int k, int m) {
    
    return 0;
}


int main() {
    int N;
    cin >> N;
    memset(memo, -1, sizeof(memo));
    while(N--) {
        int k, m;
        cin >> k >> m;
        int ans = destroyMailBox(k, 0, m);
        cout << ans << "\n";
    }
    return 0;
}