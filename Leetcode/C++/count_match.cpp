#include<iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int matches = 0;
    while(N > 1) {
        if(N&1) {
            N = (N - 1) / 2 + 1;
            matches += N-1;
        } else {
            N /= 2;
            matches += N;
        }
    }
    cout << matches;
    return 0;
}