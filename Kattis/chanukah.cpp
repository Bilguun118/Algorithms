#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        int days, candles;
        cin >> candles >> days;
        int ans = 0;
        for(int i = 1; i <= days; i++) {
            ans += i + 1;
        }
        cout << candles << " " << ans << endl; 
    }
    return 0;
}