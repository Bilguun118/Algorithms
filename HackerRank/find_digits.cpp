#include<iostream>

using namespace std;

int findDigits(int n) {
    int ans = 0;
    int c = n;
    while(c != 0) {
        int digit = c % 10;
        c /= 10;
        if(digit == 0) continue;
        if(n % digit == 0) ans++;
    }
    return ans;
}

int main() {
    int ans = findDigits(128);
    cout << ans;
    return 0;
}