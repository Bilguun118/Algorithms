#include <iostream>

using namespace std;

int main() {
    int N,X;
    int total=0;
    cin >> N >> X;
    while(N--) {
        int E;
        cin >> E;
        total += E;
    }
    if (total <= X ) {
        cout << "Jebb\n";
    } else {
        cout << "Neibb\n";
    }
    return 0;
}