#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N,W,H;
    cin >> N >> W >> H;
    int dimensions = sqrt((W*W) + (H*H));
    while (N--) {
        int match;
        cin >> match;
        if (dimensions >= match) {
            cout << "DA" << "\n";
        } else {
            cout << "NE" << "\n";
        }
    }
    return 0;
}