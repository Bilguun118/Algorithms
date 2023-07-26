#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    if (x == 0 && y == 1) {
        cout << "ALL GOOD" << "\n";
    } else if (y == 1) {
        cout << "IMPOSSIBLE" << "\n";
    } else {
        printf("%.6f\n", x / (1.0-y));
    }
    return 0;
}