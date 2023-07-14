#include <iostream>

using namespace std;

void find_quadrant(int X, int Y) {
    if(X > 0 && Y > 0) {
        cout << 1;
    } else if(X < 0 && Y > 0) {
        cout << 2;
    } else if(X < 0 && Y < 0) {
        cout << 3;
    } else {
        cout << 4;
    }
}

int main() {
    int X,Y;
    cin >> X >> Y;
    find_quadrant(X,Y);
    return 0;
}