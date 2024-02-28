#include<iostream>

using namespace std;

void naiveApproach(int a, int b) {
    int inc = 0;
    while(a % b != 0) {
        inc++;
        a++;
    }
    cout << inc << "\n";
    return;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int divided = 0;
        if(a % b == 0) {
            cout << 0 << "\n";
            continue;
        }
        divided = a / b;
        int all = (divided + 1) * b;
        cout << all - a << "\n";
    }
    return 0;
}