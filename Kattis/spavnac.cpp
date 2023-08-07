#include <iostream>

using namespace std;

void spavnac(int h,int m) {
    m = m - 45;
    if (m < 0) {
        if (h == 0) {
            h = 23;
            
        } else {
            h -= 1;
        }
        m = 60 - abs(m);
    }
    cout << h << " " << abs(m) << "\n";
    return;
}


int main() {
    int h,m;
    cin >> h >> m;
    spavnac(h,m);
    return 0;
}