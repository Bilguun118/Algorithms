#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    if(N&1) {
        cout << "first";
    } else {
        cout << "second";
    }
    return 0;
}