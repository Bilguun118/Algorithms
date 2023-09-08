#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    int l = pow(2, N) + 1;
    cout << l * l << "\n";
    return 0;
}