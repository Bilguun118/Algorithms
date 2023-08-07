#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        int temp;
        cin >> temp;
        if (temp&1) {
            cout << temp << " is odd\n";
        } else {
            cout << temp << " is even\n";
        }
    }
    return 0;
}