#include <iostream>

using namespace std;

int main() {
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;
    if(N1 + N2 == N3) {
        cout << "correct!";
    } else {
        cout << "wrong!";
    }
    return 0;
}