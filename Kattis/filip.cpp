#include <iostream>

using namespace std;

int rev_num(int a) {
    int keeper = 0;
    while(a > 0) {
        keeper = keeper * 10 + a  %10;
        a /= 10;
    }
    return keeper;
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans_1 = rev_num(a);
    int ans_2 = rev_num(b);
    if(ans_1 > ans_2) {
        cout << ans_1;
    } else {
        cout << ans_2;
    }
    return 0;
}