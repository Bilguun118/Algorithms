#include <iostream>

using namespace std;

int main() {
    int n, h;
    int ans = 0, bend = 0;
    cin >> n >> h;
    int f = n;
    while(n--) {
        int pheight;
        cin >> pheight;
        if (pheight > h) {
            bend++;
        }
    }
    for(int i = 0; i < f; i++) {
        ans += 1;
        if (bend > 0) {
            ans += 1;
            bend--;
        }
    }
    cout << ans << "\n";
    return 0;
}