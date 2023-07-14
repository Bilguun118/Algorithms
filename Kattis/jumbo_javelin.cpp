#include <iostream>

using namespace std;

int main() {
    int TC;
    cin >> TC;
    int ans = 0;
    while(TC--) {
        int rod;
        cin >> rod;
        ans+=rod-1;
    }
    cout << ans+1;
    return 0;
}