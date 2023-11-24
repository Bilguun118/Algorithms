#include<iostream>

using namespace std;

#define ll long long

int main() {
    ll N;
    cin >> N;
    cout << N;
    while(N > 1) {
        if(N&1) {
            N = 3 * N + 1;
        } else {
            N /= 2;
        }
        cout << " " << N;
    }
    return 0;
}