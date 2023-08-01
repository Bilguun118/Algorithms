#include <iostream>

using namespace std;

int main() {
    int p1,p2,p3,p4;
    int ans = 0;
    int idx = 0;
    for(int i = 0; i < 5; i++) {
        cin >> p1 >> p2 >> p3 >> p4;
        if (ans < p1+p2+p3+p4) {
            ans = p1+p2+p3+p4;
            idx = i+1;
        }
    }
    cout << idx << " " << ans;
    return 0;
}