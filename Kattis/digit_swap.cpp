#include <iostream>

using namespace std;

void swap_digits(int N) {
    int rev = 0;
    while(N!=0) {
        rev = rev * 10;
        rev = rev + N%10;
        N = N / 10;
    }
    cout << rev;
    return;
}


int main() {
    int N;
    cin >> N;
    swap_digits(N);
    return 0;
}