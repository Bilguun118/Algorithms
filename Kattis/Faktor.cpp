#include <iostream>

using namespace std;


void bribe_author(int N, int L) {
    cout << (N * (L - 1)) + 1;
    return;
}

int main() {
    int N, L;
    cin >> N >> L;
    bribe_author(N,L);
    return 0;
}