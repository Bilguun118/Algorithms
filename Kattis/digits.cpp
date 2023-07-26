#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    while(1) {
        cin >> N;
        if (N == "END") {
            break;
        }
        if (N == "1") {
            cout << 1 << "\n";
            continue;
        }
        int digits = N.size();
        int ans = 1;
        int bef = 0;
        int count = 0;
        while(1) {
            if(bef == digits) {
                cout << ans << "\n";
                break;
            }
            bef = digits;
            count = 0;
            while(digits > 0) {
                digits /= 10;
                count++;
            }
            digits = count;
            ans++;
        }
    }
}