#include <iostream>

using namespace std;

void find_gcvwr(int towing, int items) {
    int space = 0.9 * towing;
    cout << space - items;
    return;
}

int main() {
    int G, T, N;
    cin >> G >> T >> N;
    int items = 0;
    while(N--) {
        int temp;
        cin >> temp;
        items += temp;
    }
    find_gcvwr(G-T,items);
    return 0;
}