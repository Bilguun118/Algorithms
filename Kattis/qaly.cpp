#include <iostream>

using namespace std;

int main() {
    int TC;
    cin >> TC;
    double ans = 0;
    while(TC--) {
        double q, y;
        cin >> q >> y;
        ans += q * y;
    }
    printf("%lf", ans);
    return 0;
}