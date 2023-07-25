#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    while(N--) {
        int temp;
        cin >> temp;
        if(temp < 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}