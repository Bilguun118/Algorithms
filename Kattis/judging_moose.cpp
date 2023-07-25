#include <iostream>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    if(l == 0 && r == 0) {
        cout << "Not a moose";
        return 0;
    }
    if(l == r) {
        
        cout << "Even " << l+r;
    } else {
        int max_num;
        if(l > r) {
            max_num = l*2;
        } else {
            max_num = r*2;
        }
        cout << "Odd " << max_num;
    }
    return 0;
}