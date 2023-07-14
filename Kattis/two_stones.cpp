#include <iostream>

using namespace std;

void take_two_stones(int N) {
    if(N&1) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
    return;
}


int main() {
    int N;
    cin >> N;
    take_two_stones(N);
    return 0;
}