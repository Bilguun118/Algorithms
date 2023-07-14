#include <iostream>

using namespace std;

int main() {
    int N;
    int i = 0;
    cin >> N;
    while(i < 4) {
        N /= 10;
        i++;
    }
    if(N == 555) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}