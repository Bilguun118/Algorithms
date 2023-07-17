#include <iostream>
#include <vector>

using namespace std;


void is_prime(int N) {
    if (N == 1) {
        cout << "YES";
        return;
    }
    int i = 2;
    while(i*i <= N) {
        if (N % i == 0) {
            cout << "NO";
            return;
        }
        i++;
    }
    cout << "YES";
}

int main() {
    int N;
    cin >> N;
    is_prime(N);
    return 0;
}